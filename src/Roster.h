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
    Roster(int capacity);
    ~Roster(); //Destructor

    void parseThenAdd(string studentDataLine);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
    void printAll();
    void remove(string studentID);
    void printByDegreeProgram(Degree degreeProgram);
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();

    void tempCounter = 0;

private:
    // Declare an array of pointers
    Student** classRosterArray; //Since this is an array of pointeres, I used **
    int lastStudent; //last student in the roster, this records number of entries. will act as a counter
    int capacity;
};

Roster::~Roster()
{}

