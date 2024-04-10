// practice

#include <iostream>
#include <vector>

using namespace std;

// Определите лямбда-выражение, которое возвращает количество строк в векторе std::vector<std::string>,
// которые начинаются с определенной буквы.


int main()
{
    vector<string> v_d {"never", "ever", "not", "either", "nither"};
    char ch;
    auto ch_cnt {
        [&v_d] (char ch) {
        int cnt {0};
        for(string st:v_d) {
            if (st[0]==ch) cnt++;
            }
        return cnt;
        }
    };

    cout << "Enter the char: "; 
    cin >> ch;
    //ch ='n';

    cout << ch_cnt(ch) << endl;

    return 0;
}
