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

softwareStudent::softwareStudent():Student()
{}

softwareStudent::softwareStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int daysLeft[], Degree degree)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft, degree)
{
    degree = SOFTWARE;
}

Degree softwareStudent::getDegreeProgram()
{
    return SOFTWARE;
}

void softwareStudent::print()
{
    this->Student::print();
    cout << "Degree Program: Software";;
}

softwareStudent::~softwareStudent()
{
    Student::~Student();
}