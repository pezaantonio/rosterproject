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

networkStudent::networkStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeProgram)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft)
{
    degreeProgram = ndegreeProgram;
}

Degree networkStudent::getDegreeProgram()
{
    return ndegreeProgram;
}

void networkStudent::print()
{
    cout << "test";
}