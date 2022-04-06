#include <iostream>

#include "utils/array.cpp"

int const sortedArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

int main()
{
    for (int i = 0; i < ArrayLength(sortedArray); i++)
    {
        std::cout << sortedArray[i] << std::endl;
    }

    return 0;
}