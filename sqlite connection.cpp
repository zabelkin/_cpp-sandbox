#include <iostream>
#include <string>
#include <sqlite3.h>

using namespace std;

int main(int argc, char* argv[])
{
    sqlite3 *my_db;
    sqlite3_stmt *my_stmt;
    int conn_stat; 

    string db_path {"C:/sqlite/testdb1.db"}; 
    string str_query {"select name from sqlite_schema where type='table'"};
    // char *zErrMsg = NULL;

    try {
        conn_stat = sqlite3_open_v2(db_path.c_str(), &my_db, SQLITE_OPEN_READWRITE, NULL); // SQLITE_OPEN_READONLY, SQLITE_OPEN_CREATE, SQLITE_OPEN_EXCLUSIVE (vfs only)
        //conn_stat = sqlite3_open(db_path.c_str(), &my_db); // this works, but creates empty db if file not found
        if (conn_stat) {
            string err_msg = sqlite3_errmsg(my_db);
            cout << "DB open status=" << conn_stat << ", Error: " << sqlite3_errmsg(my_db) << endl;
            throw(err_msg);
            return 1;
        }

        sqlite3_prepare(my_db, str_query.c_str(), sizeof(str_query), &my_stmt, NULL); // open statement
        cout << "tables found:" << endl;
        while (sqlite3_step(my_stmt) != SQLITE_DONE) {
            cout<< sqlite3_column_text(my_stmt, 0) << "\t"; // statement cycle
        }
        cout << endl;

        sqlite3_finalize(my_stmt); // destroy statement
        sqlite3_close(my_db);
    }
    catch (string err_message){
        cerr << err_message << endl;
    }
    catch (...) {
        cout << "ERROR ..." << endl; // never reached as no exception generated( unless manually generated as above
    }

}
