#include <iostream>
#include <vector>
 
void print (const std::vector<int>& data)
{
    for(const auto& n: data) std::cout << n << "\t";
    std::cout << std::endl;
}
 
bool is_negative(int n){ return n < 0;}
 
int main()
{
    std::vector<int> numbers {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};  
    std::erase_if(numbers, is_negative);
    print(numbers);   // 0       1       2       3       4       5
}

/* numbers = [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]
positive_numbers=[i for i in numbers if i>0] 
print(positive_numbers)*/