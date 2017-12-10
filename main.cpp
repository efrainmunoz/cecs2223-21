//
//  main.cpp
//  Final Project
//
//  Created by Efraín Muñoz Coreano on 12/9/17.
//  Copyright © 2017 Efraín Muñoz Coreano. All rights reserved.
//

#include <iostream>
#include "Student.hpp"
#include "OTCMedication.hpp"
#include <string>
#include <fstream>
using namespace std;

void showMainMenu();
void enterNewItem(OTCMedication [], int &);
void searchItemByName();
void printAllItems(OTCMedication [], int);
void editMedication();
void showAbout();
void exitApp();
int  getUserSelection();
bool openFileIn(fstream &, string);
void readMedications(fstream &, OTCMedication *);
int getLinesNumFrom(fstream &);

int main(int argc, const char * argv[]) {
    OTCMedication * medications = nullptr;
    int medicationsSize = 0;
    
    fstream file;
    string path = "/Users/Efra/Desktop/LAB/Final Project/Final Project/medications.txt";
    if (openFileIn(file, path))
    {
        medicationsSize = getLinesNumFrom(file);
        medications = new OTCMedication[medicationsSize];
        readMedications(file, medications);
        file.close();
    }
    else
        cout << "File open error!" << endl;
    
    int userSel;
    do {
        showMainMenu();
        userSel = getUserSelection();
        switch (userSel) {
            case 1:
                enterNewItem(medications, medicationsSize);
                break;
            case 2:
                searchItemByName();
                break;
            case 3:
                printAllItems(medications, medicationsSize);
                break;
            case 4:
                editMedication();
                break;
            case 5:
                showAbout();
                break;
            case 6:
                break;
            default:
                cout << "Invalid option. Try again...\n";
                break;
        }
    } while (userSel != 6);
    
    // Free dynamically allocated memory
    delete [] medications;
    medications = nullptr;
    
    return 0;
}

// Show the main menu
void showMainMenu()
{
    cout << " ** MAIN MENU ** \n\n";
    cout << "\t 1. Enter a new pharmacy item.\n"
    << "\t 2. Search medication by name.\n"
    << "\t 3. Print all medications on inventory.\n"
    << "\t 4. Edit a medication on inventory.\n"
    << "\t 5. About this app.\n"
    << "\t 6. Exit the app.\n";
}

// Add a new item to the inventory
void enterNewItem(OTCMedication meds[], int &len)
{
    OTCMedication *temp = new OTCMedication[len + 1];
    // Set test OTC medication
    OTCMedication med;
    med.getDataFromUser();
    temp[0].copy(med);
    for (int i=0; i < len; i++)
    {
        temp[i+1] = meds[i];
    }
    delete [] meds;
    meds = nullptr;
    meds = temp;
    len++;
}

// Search a medication by name
void searchItemByName()
{
    cout << "Search a medication by name.\n";
}

// Print all items in the inventory
void printAllItems(OTCMedication m[], int len)
{
    cout << "\n";
    for (int i=0; i < len; i++)
    {
        cout << "\t * ";
        m[i].printAll();
    }
    cout << "\n";
}

// Edit a medication info
void editMedication()
{
    cout << "Edit a medication info\n";
}

// Show the about screen
void showAbout()
{
    Student cesar("Cesar Borri", "96481", "cesar.borri4@gmail.com",
                  "Computer Engineering");
    Student gabriela("Gabriela Rodriguez", "89546", "gaby1234@gmail.com",
                  "Computer Engineering");
    Student efrain("Efraín Muñoz", "89528", "munozcoreano@gmail.com",
                  "Computer Science");
    cout << "\n\t ** ABOUT THIS APP ** \n\n";
    cesar.showInfo();
    gabriela.showInfo();
    efrain.showInfo();
}

// Exit the app
void exitApp()
{
    cout << "Exit the app\n";
}

// Get and check the user selection
int getUserSelection()
{
    int sel;
    cout << "\n Enter the option #: ";
    cin >> sel;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(10000,'\n');
        return -1;
    }
    return sel;
}

// try to open a file
bool openFileIn(fstream &file, string name)
{
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

// show the contents of a file
void readMedications(fstream &file, OTCMedication * meds)
{
    file.clear();
    file.seekg(0L, ios::beg);
    string line;
    int j = 0;
    while (file >> line)
    {
        // temp values
        string value, delimiter = ",";
        int i = 0;
        size_t pos = 0;
        
        // New OTCmed object
        OTCMedication med;
        
        while ((pos = line.find(delimiter)) != string::npos)
        {
            value = line.substr(0, pos);
            switch (i)
            {
                case 0:
                    med.setName(value);
                    break;
                case 1:
                    med.setDosage(stoi(value));
                    break;
                case 2:
                    med.setUnit(value);
                    break;
                case 3:
                    med.setShelf(value);
                    break;
                case 4:
                    med.setCost(stod(value));
                    break;
                default:
                    break;
            }
            i++;
            line.erase(0, pos + delimiter.length());
        }
        meds[j] = med;
        j++;
    }
}

// check the number of lines in file
int getLinesNumFrom(fstream &file)
{
    string line;
    int numOfLies = 0;
    while (file >> line) {
        numOfLies++;
    }
    return numOfLies;
}



























