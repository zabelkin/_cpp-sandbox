#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int a {1}, b{0};
    try {
        cout << a/b;
    }
    catch (const runtime_error& re) {
        cerr << "ERROR rt" << endl;
    }
    catch (const exception& e) {
        cerr << "ERROR e" << endl;
        // cerr << e.errorCode() << ":" << e.errorMessage() << endl;
    }
    catch (...) {
        cerr << "ERROR ..." << endl;
        // cerr << e.errorCode() << ":" << e.errorMessage() << endl;
    }

}
