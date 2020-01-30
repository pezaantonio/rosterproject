/*
 * Antonio Peza
 * Student Id: #001174649
 * C867 Scripting and Programming - Applications
 *
 * The purpose of this program is to use C++ to move a database over of student info
 *
 *
*/
#include <iostream>
#include <string>
#include "Student.h"
#include "Degree.h"

using namespace std;

//This is my empty constructor
Student::Student()
{
    // I'm initilizing all the string variables as blank strings and the one integer variable to 0
    ifirstName = ""; 
    ilastName = "";
    istudEmail = "";
    istudID = "";
    istudAge = 0;
    for (int i = 0; i < daysArraySize; i++) this->idaysLeft[i] = 0;

}

// This is my parameterized constructor
Student::Student(string firstName, string lastName, string studEmail, string studID, int studAge, int daysLeft[])
    :ifirstName(firstName), ilastName(lastName), istudEmail(studEmail), istudID(studID), istudAge(studAge)
{
    for (int i = 0; i < daysArraySize; i++) this->idaysLeft[i] = daysLeft[i];
}


// This is my default destructor
Student::~Student()
{}

/*
    These are my member functions for my class. Each one is a getter and only returns
    the associated value
*/
string Student::getFirstName()
{
    return ifirstName;
}

string Student::getLastName()
{
    return ilastName;
}

string Student::getEmail()
{
    return istudEmail;
}

string Student::getStudID()
{
    return istudID;
}

int Student::getAge()
{
    return istudAge;
}

int* Student::getDays()
{
    return idaysLeft;
}

void Student::setNumDays(int d0, int d1, int d2)
{
    idaysLeft[0] = d0;
    idaysLeft[1] = d1;
    idaysLeft[2] = d2;
}

void Student::print()
{
    cout << "Printing student info: \n";
    cout << "\t" << "First Name: " << ifirstName << endl;
    cout << "\t" << "Last Name: " << ilastName << endl;
    cout << "\t" << "Email: " << istudEmail << endl;
    cout << "\t" << "Student ID: " << istudID << endl;
    cout << "\t" << "Student Age: " << istudAge << endl;
    cout << "\t" << "Days in Course 1: " << idaysLeft[0];
    cout << "\t" << "Days in Course 1: " << idaysLeft[1];
    cout << "\t" << "Days in Course 1: " << idaysLeft[2];
}

Degree Student::getDegreeProgram()
{
    return OTHER;
}