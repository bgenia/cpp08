#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int item)
{
    return std::find(container.begin(), container.end(), item);
}
