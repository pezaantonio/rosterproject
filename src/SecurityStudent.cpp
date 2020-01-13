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
#include "SecurityStudent.h"

using namespace std;

securityStudent::securityStudent()
{}

securityStudent::securityStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeProgram)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft)
{
    degreeProgram = secdegreeProgram;
}

Degree securityStudent::getDegreeProgram()
{
    return secdegreeProgram;
}

void securityStudent::print()
{
    cout << "test";
}