#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    // Add some elements to the stack
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top element: " << mstack.top() << std::endl;

    std::cout << "Stack elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
        std::cout << *it << std::endl;
    }
    std::cout << "--------------------" << std::endl;
    // Remove the top element
    mstack.pop();
    
    std::cout << "Stack size: " << mstack.size() << std::endl;

    // Add more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Stack size: " << mstack.size() << std::endl;

    // Iterate through the stack using the custom iterators
    std::cout << "Stack elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
        std::cout << *it << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    // Using a copy constructor
    MutantStack<int> mstackCopy(mstack);
    std::cout << "Copy of stack elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstackCopy.begin(); it != mstackCopy.end(); ++it)
	{
        std::cout << *it << std::endl;
    }

    return (0);
}
