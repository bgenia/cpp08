#include <iostream>
#include <exception>
#include <vector>

#include <Span.hpp>

int main()
{
    {
        std::cout << "[Subject]:" << std::endl;

        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "[Length limit]:" << std::endl;

        Span sp = Span(3);

        try
        {
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(2);
            sp.addNumber(3);
            sp.addNumber(3);
            sp.addNumber(4);
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "[Range]:" << std::endl;

        Span sp = Span(1000);

        sp.addNumbers(1, 1000);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "[Iterators]:" << std::endl;

        std::vector<int> numbers;

        numbers.push_back(1);
        numbers.push_back(3);
        numbers.push_back(10);

        Span sp = Span(numbers.size());

        sp.addNumbers(numbers.begin(), numbers.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}
