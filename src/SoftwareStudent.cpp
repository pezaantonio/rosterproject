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
#include "SoftwareStudent.h"

using namespace std;

softwareStudent::softwareStudent()
{}

softwareStudent::softwareStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeProgram)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft)
{
    degreeProgram = sdegreeProgram;
}

Degree softwareStudent::getDegreeProgram()
{
    return sdegreeProgram;
}

void softwareStudent::print()
{
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Degree Program: Software";;
}