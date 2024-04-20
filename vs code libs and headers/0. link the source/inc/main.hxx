#include <iostream>
#include <format>
#include <string>
#include "draw_line.h"


/// main function 
int main(int argc, char* argv[], char* agrn[])
{
    std::cout << "\nInput parameters:\n";
    draw_line();
    
    for(int i=0; i<argc; i++){
        std::cout << std::format("{}\t{}\n", i, argv[i]);
    }
    draw_line();
    
    return 0;
}
