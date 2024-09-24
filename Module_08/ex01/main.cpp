#include "Span.hpp"


// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }

int main(void)
{
	srand(time(0));
    Span a(4);
    try
    {
        a.addNumber(24);
        a.addNumber(1);
        a.addNumber(11);
        a.addNumber(-21);
        std::cout << "Longest span: " << a.longestSpan() << std::endl;
        std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
        a.addNumber(4);
        std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    Span b(4);
    try
    {
        b.addNumber(8);
        b.addNumber(13);
        b.addNumber(3);
        b.addNumber(13);
        std::cout << "Longest span: " << b.longestSpan() << std::endl;
        std::cout << "Shortest span: " << b.shortestSpan() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    Span c(10000);
    try
    {
        c.addNumbers(9000);
        c.addNumbers(1001);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    Span d(a);
    std::cout << "Longest span: " << a.longestSpan() << std::endl;
    std::cout << "Shortest span: " << a.shortestSpan() << std::endl;

    Span e;
    e = c;
    std::cout << "Longest span: " << e.longestSpan() << std::endl;
    std::cout << "Shortest span: " << e.shortestSpan() << std::endl;
    return (0);
}