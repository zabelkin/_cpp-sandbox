#include <iostream>
 
enum class Operation: char {Add = '+', Subtract='-', Multiply='*'};
int main()
{
    std::cout << "add: " << static_cast<char>(Operation::Add) << std::endl;
    std::cout << "subtracte: " << static_cast<char>(Operation::Subtract) << std::endl;
    std::cout << "multiply: " << static_cast<char>(Operation::Multiply) << std::endl;
}