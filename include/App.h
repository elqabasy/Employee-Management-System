//
// Created by Mahros on 12/11/2023.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_APP_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_APP_H
#include <iostream>
using namespace std;

class App{
    private:
        bool _status = false;
        string _name = "New App";
        string _description = " ";
    public:
        // Constructor
        explicit App(string name = "New App", string description = " ");



        // Functionality
        bool run();
        bool close();


        // Destructor
        ~App();
};
#endif //EMPLOYEE_MANAGEMENT_SYSTEM_APP_H
