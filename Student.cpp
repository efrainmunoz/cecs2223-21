//
//  Student.cpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#include "Student.hpp"
#include <string>
#include <iostream>
using namespace std;

// Student class constructor
Student::Student(string n, string i, string e, string m)
{
    name = n;
    id = i;
    email = e;
    major = m;
}

// Student class destructor
Student::~Student() {}

// Show Student info
void Student::showInfo()
{
    cout << "\t * " << name << "\n\n"
    << "\t\t   id#: " << id << "\n"
    << "\t\t Major: " << major << "\n"
    << "\t\t Email: " << email << "\n\n";
}
