#include <iterator>

template<typename Iterator>
void Span::addNumbers(Iterator first, Iterator last)
{
    for (; first != last; first++)
        addNumber(*first);
}
