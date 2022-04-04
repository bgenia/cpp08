#pragma once

#include <set>

class Span
{
public:
    Span();
    Span(const Span& other);

    Span(const std::size_t size);

    virtual ~Span();

    void swap(Span& other);

    Span& operator=(Span other);

    void addNumber(int number);

    void addNumbers(int from, int to);

    template<typename Iterator>
    void addNumbers(Iterator first, Iterator last);

    int shortestSpan() const;
    int longestSpan() const;

private:
    std::set<int> numbers;
    std::size_t length;
};

#include <Span.tpp>
