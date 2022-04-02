#include <iostream>
#include <vector>

#include <easyfind.hpp>

int main()
{
    std::vector<int> ints;

    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);

    std::cout << *easyfind(ints, 2) << std::endl;
    std::cout << *easyfind(ints, 4) << std::endl;

    if (easyfind(ints, 2) == ints.end())
        std::cout << "2 not found" << std::endl;

    if (easyfind(ints, 4) == ints.end())
        std::cout << "4 not found" << std::endl;
}
