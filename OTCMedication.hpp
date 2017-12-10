//
//  OTCMedication.hpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#ifndef OTCMedication_hpp
#define OTCMedication_hpp

#include <string>
#include "BaseMedication.hpp"
using namespace std;

class OTCMedication : public BaseMedication
{
private:
    string shelf;
public:
    // Default constructor
    OTCMedication();
    // Destructor
    ~OTCMedication();
    // Copy constructor
    OTCMedication(OTCMedication &);
    
    // Accessors
    string getShelf() const;
    
    // Mutators
    void setShelf(string);
    void copy(OTCMedication &);
    
    // Other functions
    void printAll();
    void getDataFromUser();
};

#endif /* OTCMedication_hpp */
