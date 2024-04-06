#include <iostream>
#include <format>
 
int main()
{
    int a{10};
    int b{20};
    int c{30};
    std::cout << std::format("{0:} {0:b} {0:X}", 62);    // 62 111110 3E
}
