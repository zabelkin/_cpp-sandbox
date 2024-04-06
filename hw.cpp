#include <iostream>
#include <string>
 

int main()
{
    std::string st = "abc";
    std::cin >> st;
    std::cout << (st.find('s') != std::string::npos);    // 62 111110 3E
}
