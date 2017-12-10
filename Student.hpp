//
//  Student.hpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <string>
using namespace std;

class Student
{
private:
    string name;
    string id;
    string email;
    string major;
public:
    // COnstructors & Destructor
    Student(string, string, string, string);
    ~Student();
    void showInfo();
};

#endif /* Student_hpp */
