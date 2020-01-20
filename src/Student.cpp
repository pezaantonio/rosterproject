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

}

// This is my parameterized constructor
Student::Student(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft)
    :ifirstName(firstName), ilastName(lastName), istudEmail(studEmail), istudID(studID), istudAge(studAge), idaysLeft()
{}


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

void Student::setNumDays(int d0, int d1, int d2)
{
    idaysLeft[0] = d0;
    idaysLeft[1] = d1;
    idaysLeft[2] = d2;
}

void Student::print()
{
    cout << "test";
}

Degree Student::getDegreeProgram()
{
    return NETWORK;
}