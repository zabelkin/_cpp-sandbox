#include <iostream>

int main() {
    std::cout << 11/10;
}

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits;
        int v_size;

        if (x<0) return false;
        if (x==0) return true;
        while (x>0) {
            digits.push_back(x%10);
            x /=10;
        }
        v_size = digits.size(); 
        while (v_size>1) {
            if (digits.front()!=digits.back())
                return false;
            cout << digits.front() << "-" <<  digits.back();
            digits.erase(digits.cend());
            digits.erase(digits.cbegin());
            cout << ", " << digits.size();
            v_size = digits.size();
        }
        return true;
    }
};