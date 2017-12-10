//
//  BaseMedication.cpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#include "BaseMedication.hpp"
#include <string>
using namespace std;

// Constructor
BaseMedication::BaseMedication()
{
    name = "Generic";
    date = "Infinity";
    dosage = 0;
    unit = "MG";
    cost = 0.0;
}

// Destructor
BaseMedication::~BaseMedication() {}

// Copy constructor
BaseMedication::BaseMedication(BaseMedication &obj)
{
    name = obj.getName();
    date = obj.getDate();
    dosage = obj.getDosage();
    unit = obj.getUnit();
    cost = obj.getCost();
}

// Mutators

// set the name of the medication
void BaseMedication::setName(string n)
{
    name = n;
}

// set the date of entry of the medication
void BaseMedication::setDate(string d)
{
    date = d;
}

// set the dosage of the medication
void BaseMedication::setDosage(int d)
{
    dosage = d;
}

// set unit of the medication
void BaseMedication::setUnit(string u)
{
    unit = u;
}

// set the cost of the medication
void BaseMedication::setCost(double c)
{
    cost = c;
}

//Accesor functions

// get the name of the medication
string BaseMedication::getName() const
{
    return name;
}

// get the date of entry of the medication
string BaseMedication::getDate() const
{
    return date;
}

// get the dosage of the medication
int BaseMedication::getDosage() const
{
    return dosage;
}

// get the cost of the medication
double BaseMedication::getCost() const
{
    return cost;
}

// get the unit of the medication
string BaseMedication::getUnit() const
{
    return unit;
}
