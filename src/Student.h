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
#include "Degree.h"
#pragma once // This is telling the the source file to only run this once

using namespace std;

class Student
{
public:
    Student(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeType); //This is a parameterized constructor for the student class

    string getFirstName(); //This will get the first name of the student
    string getLastName(); //This will get the last name of the student
    string getEmail(); //This will get the student's email
    string getStudID(); // This will get the student's ID number
    int getAge(); // This will get the age of the student
    int* getDays(); // This will get the days left

private:
    // These are the variables that are going to make up the student info
    string ifirstName, ilastName, istudEmail, istudID;
    Degree idegreeType;
    int istudAge;
    int daysLeft[3];
};


// This is my parameterized constructor
Student::Student(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeType)
    :ifirstName(firstName), ilastName(lastName), istudEmail(studEmail), istudID(studID), istudAge(studAge), idaysLeft(daysLeft), idegreeType(degreeType)
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