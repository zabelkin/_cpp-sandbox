#include <iostream>
#include <string>

#include "draw_line.hxx"


/// @brief sends separating line of a given length to count 
/// @param length optional, =10 by default
/// @param ch optional, ='-' by defualt
void draw_line(int length, char ch)
{
    std::cout << std::string(length, ch) << std::endl;
}