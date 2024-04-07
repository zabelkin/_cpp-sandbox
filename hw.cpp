// enviroment variables manipulation

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char* argv[], char **envp)
{
    char c_mode = 'y';
    string s_str;

    cout << "Looking at names (Y/n)?";
    cin >> c_mode;
    cout << "Enter lookup string:";
    cin >> s_str;
    
    /* for (char **ptr_env=envp; *ptr_env!=NULL; ptr_env++) {
        string s_env = {*ptr_env};
        cout << s_env << endl;
    } */

}
