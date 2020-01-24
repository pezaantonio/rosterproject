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
#include "Student.h"
#include "Degree.h"
#pragma once

using namespace std;

class securityStudent : public Student
{
public:
    securityStudent();
    ~securityStudent();
    securityStudent(string firstName, string lastName, string studEmail, string studID, int studAge, int daysLeft[], Degree degree);
    
    Degree getDegreeProgram() override;
    void print() override;

private:
    Degree degree = SECURITY;
};