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
#include "Student.h"
#pragma once

using namespace std;

class softwareStudent : public Student
{
public:
    softwareStudent();
    softwareStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int* daysLeft, Degree degreeProgram);

    Degree getDegreeProgram() override;
    void print() override;

private:
    Degree sdegreeProgram;
};
