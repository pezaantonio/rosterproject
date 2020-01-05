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
#pragma once // This is telling the the source file to only run this once

using namespace std;

class Student
{
public:
    Student(string firstName, string lastName, string studEmail, int studAge, int* daysLeft); //This is a parameterized constructor for the student class

    string getFirstName(); //This will get the first name of the student
    string getLastName(); //This will get the last name of the student
    string getEmail(); //This will get the student's email
    string getStudID(); // This will get the student's ID number
    int getAge(); // This will get the age of the student
    int* getDays(); // This will get the days left

private:
    // These are the variables that are going to make up the student info
    string ifirstName, ilastName, istudEmail;
    int istudAge;
    int daysLeft[3];
};


// This is my parameterized constructor
Student::Student(string firstName, string lastName, string studEmail, int studAge, int* daysLeft)
    :ifirstName(firstName), ilastName(lastName), istudEmail(studEmail), istudAge(studAge), idaysLeft(daysLeft)
{}