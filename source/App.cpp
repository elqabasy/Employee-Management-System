//
// Created by Mahros on 12/11/2023.
//
#include <iostream>
#include <utility>
#include "../include/App.h"
using namespace std;

// App
App::App(string name, string description) {
    this->_name = std::move(name);
    this->_description = std::move(description);
    cout << "STARTED: " << this->_name << endl;

}

bool App::run() {
    cout << "RUNNING: " << this->_name << endl;
    return true;
}

bool App::close() {
    cout << "CLOSING: " << this->_name << endl;
    return true;
}

App::~App() {
    cout << "ENDED: " << this->_name << endl;
}