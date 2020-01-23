/*
 * Antonio Peza
 * Student Id: #001174649
 * C867 Scripting and Programming - Applications
 *
 * The purpose of this program is to use C++ to move a database over of student info
 *
 *
*/
#include <iostream> // Including to handle input output
#include <string> // Including  to handle strings
#pragma once // Including to only run once

using namespace std; // Including to handle std::

//Enumeration for the Degree types
enum Degree 
{
    SECURITY,
    NETWORK,
    SOFTWARE,
    NONE
};

//Parallel enumeration array of strings
const string degreeProgram[] =
{
    "SECURITY",
    "NETWORK",
    "SOFTWARE",
    "NONE"
};