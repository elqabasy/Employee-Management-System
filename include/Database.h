//
// Created by Mahros on 12/11/2023.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_DATABASE_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_DATABASE_H
#include <iostream>
using  namespace std;

class Database {
    private:
        bool _status = false;
        string _name = "DB";
        string _file;
    public:
        // Constructor
        Database();

        // Setters


        // Getters

        // Destructor
        ~Database();
};


#endif //EMPLOYEE_MANAGEMENT_SYSTEM_DATABASE_H
