// practice

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string str_meters;
    int meters;
    try {
        cout << "Enter meters (integer, spaces are ok):";
        getline(cin, str_meters);
        str_meters.erase( \
            remove(str_meters.begin(), str_meters.end(), ' '), \
            str_meters.end());
        meters = stoi(str_meters);
        
        cout << "I.e. " << meters/1000 << " km and " << meters%1000 << " m" << endl;
    }
    catch(exception e) {
        cout << "Wrong input. A number is expected. Halting..." << endl;
    }
    return 0;
}
