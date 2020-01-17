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
#include "NetworkStudent.h"

using namespace std;

// The first constructor is blank, the second constructor is parameterized
networkStudent::networkStudent()
{}

// Parameterized and also setting the degreeProgram variable
networkStudent::networkStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeProgram)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft)
{
    degreeProgram = ndegreeProgram;
}

// Member function to return the degree program
Degree networkStudent::getDegreeProgram()
{
    return ndegreeProgram;
}

// Member function to print values
void networkStudent::print()
{
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Degree Program: Network";
}