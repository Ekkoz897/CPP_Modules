#include "Base.hpp"

class A  : public Base {};
class B  : public Base {};
class C  : public Base {};

Base* generate(void)
{
    int n = (std::rand() % 10);

    if (n >= 0 && n <= 3)
    {
        std::cout << "Type A object created." << std::endl;
        return (new A);
    }
    else if (n > 3 && n <= 6)
    {
        std::cout << "Type B object created." << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "Type C object created." << std::endl;
        return (new C);
    }
}

// dynamic_cast returns nullptr when the cast fails with pointers
void    identify(Base* p)
{
    std::cout << "Identify 1: ";
    if (dynamic_cast<A*>(p))
        std::cout << "Object is of type A." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object is of type B." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object is of type C." << std::endl;
}

// quando sao referencias e ha um erro no cast da throw a um std::bad_cast, contornamos isso com try/catch
void    identify(Base& p)
{
   std::cout << "Identify 2: ";

    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Object is of type A." << std::endl;
        (void)a;
    }
    catch(const std::exception& e) {}

    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "Object is of type B." << std::endl;
        (void)b;
    }
    catch(const std::exception& e) {}
    
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "Object is of type C." << std::endl;
        (void)c;
    }
    catch(const std::exception& e) {}
}

int main(void)
{
	std::srand(std::time(0));
	
    Base* obj = generate();
    identify(obj);
    identify(*obj);

    std::cout << "---------------" << std::endl;

    Base* obj1 = generate();
    identify(obj1);
    identify(*obj1);

    std::cout << "---------------" << std::endl;

    Base* obj2 = generate();
    identify(obj2);
    identify(*obj2);

    std::cout << "---------------" << std::endl;

    Base* obj3 = generate();
    identify(obj3);
    identify(*obj3);

    return (0);
}
