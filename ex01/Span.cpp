#include <Span.hpp>

#include <algorithm>
#include <stdexcept>
#include <limits>

Span::Span()
    : length(0) {}

Span::Span(const Span& other)
    : numbers(other.numbers), length(other.length) {}

Span::Span(const std::size_t size)
    : length(size) {}

Span::~Span() {}

void Span::swap(Span& other)
{
    std::swap(length, other.length);
    numbers.swap(other.numbers);
}

Span& Span::operator=(Span other)
{
    swap(other);
    return *this;
}

void Span::addNumber(int number)
{
    if (numbers.count(number) == 0 && numbers.size() >= length)
        throw std::length_error("max span length reached");

    numbers.insert(number);
}

void Span::addNumbers(int from, int to)
{
    for (int i = from; i <= to; i++)
        addNumber(i);
}

int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("span computation requires at least 2 numbers");

    int result = std::numeric_limits<int>::max();

    typedef std::set<int>::iterator iterator_t;

    for (iterator_t prev = numbers.begin(), next = ++numbers.begin();
        next != numbers.end(); ++prev, ++next)
        result = std::min(result, *next - *prev);

    return result;
}

int Span::longestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("span computation requires at least 2 numbers");

    return *--numbers.end() - *numbers.begin();
}
