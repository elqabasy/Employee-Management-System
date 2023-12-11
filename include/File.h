//
// Created by Mahros on 12/11/2023.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_FILE_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_FILE_H
// #include <cstdio>
#include <iostream>
#include <fstream>
#include "Constants.h"
using namespace std;


/*
    READ,       // "r"
    WRITE,      // "w"
    APPEND,     // "a"
    READ_WRITE, // "r+"
    WRITE_READ, // "w+"
    APPEND_READ // "a+"
 */

class File {
    private:
        bool _ready = true;
        // FILE *FILE_PTR{};
        ifstream FILE;
        const char *_path{};
        const char *_mode{};
    public:
        // Constructor
        explicit File(const char *path, const char *mode = FILE_MODE_READ);

        // Setters
        void path(const char *path);
        void mode(const char *mode);

        // Getters
        string path();
        string mode();

        // Functionality
        void open();
        void close();
        bool opened();
        string read();
        void write(string text, string mode);

        // Destructor
        ~File();
};


#endif //EMPLOYEE_MANAGEMENT_SYSTEM_FILE_H
