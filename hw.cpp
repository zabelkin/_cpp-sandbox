// practice

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int max_arr = 20;
    int arr_odds[max_arr];

    for(int i=0; i<max_arr; i++) {
        arr_odds[i]=2*i+1;
    }

    for(int i=0; i<max_arr; i++) {
        cout << *(arr_odds+i) << ((i+1)%5==0?"\n":"\t");
    }

    return 0;
}
