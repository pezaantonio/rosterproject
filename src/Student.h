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

    Student(); //This is the empty constructor to take no arguments
    Student(string firstName, string lastName, string studEmail, string studID, int studAge, int daysLeft[], Degree degree); //This is a parameterized constructor for the student class
    ~Student();

    const static int daysArraySize = 3; //making this a constant static int for all the daysLeft
    string getFirstName(); //This will get the first name of the student
    string getLastName(); //This will get the last name of the student
    string getEmail(); //This will get the student's email
    string getStudID(); // This will get the student's ID number
    int getAge(); // This will get the age of the student
    int* getDays(); // This will get the days left

    void setNumDays(int d0, int d1, int d2);

    virtual Degree getDegreeProgram();
    virtual void print();

private:
    // These are the variables that are going to make up the student info
    string ifirstName, ilastName, istudEmail, istudID;
    int istudAge;
    int idaysLeft[daysArraySize];
    Degree degree;
};