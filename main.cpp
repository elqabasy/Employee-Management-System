#include <cstdlib>
#include <iostream>
#include "include/Constants.h"
#include "include/File.h"
using namespace std;

int main() {
    // File.h (test)
    File DB_FILE("db.txt", "w");

    cout << DB_FILE.opened() << endl;
    DB_FILE.open();
    cout << DB_FILE.opened() << endl;
    // DB_FILE.close();
    return 0;
}
