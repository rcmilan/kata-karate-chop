#include <iostream>
#include <string>

class Console
{
public:
    static void WriteLine(std::string str)
    {
        std::cout << str << std::endl;
    }

    static void WriteLine(int integer)
    {
        WriteLine(std::to_string(integer));
    }
};