#include <iostream>
#include <string>

using namespace std;

wstring change_case(wstring_view input, bool to_upper=0){
    wstring res;
    for(auto ch: input) res.push_back(to_upper?towupper(ch):towlower(ch)); //
    return res;
}


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    std::wstring_view text {L"Хорошо живёт на свете Винни-Пух!"};
    std::wcout << wstring(L"Вход:\t") << text << std::endl;
    std::wcout << wstring(L"Выход:\t") << change_case(text, 1) << std::endl;    // Text contains 8 words

    if(std::wcout.fail()){
        cout << "Smth went wrong";
    }
}
