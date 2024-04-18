#include <iostream>
#include <format>
#include <string>


void draw_line(int length = 10, char ch = '-');


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

    
/// test function 
void draw_line(int length, char ch)
{
    std::cout << std::string(length, ch) << std::endl;
}