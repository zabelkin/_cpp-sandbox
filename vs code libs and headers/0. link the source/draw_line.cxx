#include <iostream>
#include <string>

#include "draw_line.hxx"
    
void draw_line(int length, char ch)
{
    std::cout << std::string(length, ch) << std::endl;
}