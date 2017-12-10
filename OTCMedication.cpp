//
//  OTCMedication.cpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#include "OTCMedication.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// Default constructor
OTCMedication::OTCMedication()
{
    shelf = "A";
}

// Destructor
OTCMedication::~OTCMedication(){}

// Copy Constructor
OTCMedication::OTCMedication(OTCMedication &obj)
{
    shelf = obj.getShelf();
}

// Accessors

// get the shelf
string OTCMedication::getShelf() const
{
    return shelf;
}

// Mutators

// set the shelf of the medication
void OTCMedication::setShelf(string s)
{
    shelf = s;
}

// Copy values from other object
void OTCMedication::copy(OTCMedication &obj)
{
    setName(obj.getName());
    setDate(obj.getDate());
    setDosage(obj.getDosage());
    setUnit(obj.getUnit());
    setCost(obj.getCost());
    setShelf(obj.getShelf());
}

// Other functions

// print the OTC medication info
void OTCMedication::printAll()
{
    cout << fixed << setprecision(2)
    << getName() << " "
    << getDosage() << " "
    << getUnit() << " located at shelf "
    << getShelf() << " with a cost of $"
    << getCost() << " each "
    << getUnit() << ".\n";
}

// get new data from the user.
void OTCMedication::getDataFromUser()
{
    // get and set the med's name
    string n;
    cout << "Enter the name of the medication: ";
    cin >> n;
    setName(n);
 
    // get and set the med's dosage
    int d;
    cout << "Enter the dosage of the medication: ";
    cin >> d;
    setDosage(d);
    
    // get and set the med's unit
    string u;
    cout << "Enter the unit of the medication: ";
    cin >> u;
    setUnit(u);
    
    // get and set the med's shelf
    string s;
    cout << "Enter the shelf of the medication: ";
    cin >> s;
    setShelf(s);
    
    // get and set the med's costs
    double c;
    cout << "Enter the cost per unit of the medication: ";
    cin >> c;
    setCost(c);
}









