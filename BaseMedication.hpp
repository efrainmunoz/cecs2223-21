//
//  BaseMedication.hpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#ifndef BaseMedication_hpp
#define BaseMedication_hpp

#include <string>
using namespace std;
class BaseMedication
{
private:
    string name;
    string date; // temporary
    int dosage;
    string unit;
    double cost;
    
public:
    // Constructors & Destructor
    BaseMedication();
    ~BaseMedication();
    BaseMedication(BaseMedication &);
    
    // Mutater functions
    
    void setName(string);
    void setDate(string);
    void setDosage(int);
    void setUnit(string);
    void setCost(double);
    
    //Accesor functions
    
    string getName() const;
    string getDate() const;
    int getDosage() const;
    string getUnit() const;
    double getCost()const;
};

#endif /* BaseMedication_hpp */
