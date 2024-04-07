// enviroment variables manipulation

#include <iostream>
#include <string>

using namespace std;


string ch_case(string_view input, bool is_upper){
    string res;
    for(auto ch: input) res.push_back(is_upper?toupper(ch):tolower(ch));
    // std::transform(s.begin(), s.end(), s.begin(), ::toupper)?
    return res;
}


int main(int argc, char* argv[], char **envp)
{
    string my_env = "my_env"; 
    string my_val = "my_special_value";
    string s_str;

    cout << "Enter lookup string:";
    getline(cin, s_str);
    cout << "Variables and values found: " << endl;
    {   
        string temp_str = my_env + "=" + my_val;
        putenv(temp_str.c_str()); // senenv doesn't work in VS Code
    }
    
    for (char **ptr_env=envp; *ptr_env!=NULL; ptr_env++) {
        string s_env = {*ptr_env};
        if (ch_case(s_env, 0).find(ch_case(s_str,0))!=-1)
            cout << s_env << endl;
    }

    cout << "Meanwhile " << my_env << "=" << getenv(my_env.c_str());
    return 0;
}
