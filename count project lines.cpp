/*
count non-empty code lines in *.h and *.cpp files 
in a given folder and subfolders 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;


// pre-declarations 
bool is_countable_file(string);
long count_code_lines(string);


int main(int argc, char* argv[])
{
    int total_files;
    long total_code_lines {0};
    string str_path, working_path = filesystem::current_path().generic_string();

    working_path = working_path.substr(0, working_path.rfind('\\')); // cut file name
    if (argc>1) working_path = argv[1];

    try {
        for (const auto& dirEntry : filesystem::recursive_directory_iterator(working_path)) {
            str_path = dirEntry.path().generic_string();
            if (is_countable_file(str_path)) {
                total_files ++;
                total_code_lines += count_code_lines(str_path);
            }
        }
    }
    catch (...) {
        cout << endl << "'" << working_path  << "' is not a valid path" << endl;
    }
    cout << endl << "--" << endl << "Path: " << working_path << endl << "Total files: " << total_files << endl;
    cout << "Total non-empty lines: " << total_code_lines << endl;
}


// check file extention  
bool is_countable_file(string file_path){
    string file_name, file_extention;

    file_name = file_path.substr(file_path.rfind('/')+1, sizeof(file_path)-1); // cut file name    
    if (file_name.rfind('.')!=string::npos)
        file_extention = file_name.substr(file_name.rfind('.')+1, sizeof(file_name)-1);

    return (file_extention=="cpp" || file_extention=="h");
}


// count lines with code, droppong empty ones
long count_code_lines(string file_path){
    string a_line;
    long file_code_lines;
    ifstream file_handler(file_path);
    
    cout << ".";
    while (getline(file_handler, a_line)) {
        if (a_line.length()>0) file_code_lines ++ ;
    }

    file_handler.close();
    return file_code_lines;
}
