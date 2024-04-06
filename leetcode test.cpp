#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        bool char_check = true;
        char a_char;

        for(int i=0; i<=200 && char_check; i++) {
            a_char=strs[0][i];
            char_check=true;
            for(string s: strs) {
                char_check = char_check && (s[i]==a_char);
                if (!char_check) {
                    break;
                } 
            }
            if (char_check) res.push_back(a_char);
        }
        return res;
    }
};


int main() {
    Solution tst;
    //vector<string> test_strings = {"flower","flow","flight"};
    //vector<string> test_strings = {"f1lower","f1low","f2light"};
    vector<string> test_strings = {"ab","ab","abc"};
    cout << "The longest prefix: " << tst.longestCommonPrefix(test_strings);
}
