// practice

#include <iostream>
#include <string>

using namespace std;


int main()
{
    std::string string("hello $name");
    // string = std::regex_replace(string, std::regex("\\ "), "-");
    cout << string.replace(string.begin(), string.end(), "$name", "Someone!");
    return 0;
}
