//
// Created by Mahros on 12/11/2023.
//

#include "../include/File.h"
#include <iostream>
// #include <cstdio>
using namespace std;

// Constructor
File::File(const char *path, const char *mode) {
    this->path(path); this->mode(mode);
}

// Setters
void File::path(const char * path) {
    // validate path then do this:
    this->_path = path;
}
void File::mode(const char *mode) {
    // validate mode then do this:
    this->_mode = mode;
}

// Getters
string File::path() {
    return this->_path;
}
string File::mode() {
    return this->_mode;
}

// Functionality
void File::open() {
    this->FILE = ifstream(this->_path, ios::openmode());
}
void File::close() {
    this->FILE.close();
}
bool File::opened() {
    return this->FILE.is_open();
}
string File::read() {

}
void File::write(string text, string mode) {

}

// Destructor
File::~File() {
    this->close();
}