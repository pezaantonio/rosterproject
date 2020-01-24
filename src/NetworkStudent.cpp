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
networkStudent::networkStudent():Student()
{}

// Parameterized and also setting the degreeProgram variable
networkStudent::networkStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int daysLeft[], Degree degree)
    :Student(firstName, lastName, studEmail, studID, studAge, daysLeft, degree)
{
    degree= NETWORK;
}

// Member function to return the degree program
Degree networkStudent::getDegreeProgram()
{
    return NETWORK;
}

// Member function to print values
void networkStudent::print()
{
    this->Student::print();
    cout << "Degree Program: Network";
}

networkStudent::~networkStudent()
{
    Student::~Student();
}