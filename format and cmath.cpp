// practice

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numbers>
#include <format>

using namespace std;


int main()
{
    string str_radius;
    float radius (10);
    try {
/*         cout << "Enter radius (float):";
        getline(cin, str_radius);
         str_radius.erase( \
            remove(str_radius.begin(), str_radius.end(), ' '), \
            str_radius.end()); 
        replace(str_radius.begin(), str_radius.end(), ',', '.');
        radius = stof(str_radius); */
        cout << format("r= {}, cir. square= {:.2f}", radius, std::numbers::pi*pow(radius,2 )) << endl;
    }
    catch(exception e) {
        cout << "Wrong input. A number is expected. Halting..." << endl;
    }
    return 0;
}
