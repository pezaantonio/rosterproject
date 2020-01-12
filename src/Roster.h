/*
 * Antonio Peza
 * Student Id: #001174649
 * C867 Scripting and Programming - Applications
 *
 * The purpose of this program is to use C++ to move a database over of student info
 *
 *
*/
#include<iostream>
#include<string>
#include"Student.h"
#pragma once

using namespace std;

class Roster
{
public:
    Roster(); //Constructor takes no parameters
    ~Roster(); //Destructor

    void printAll();
    void add();
    void remove();
    void printByDegreeProgram();
    void printAverageDaysInCourse();
    void printInvalidEmails();


private:
    // Declare an array of pointers
    Student* classRosterArray[5];
};