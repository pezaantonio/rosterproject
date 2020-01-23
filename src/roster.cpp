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
#include <sstream>
#include <vector>
#include "Degree.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "Student.h"
#include "Roster.h"

using namespace std;

//Functions for roster.h
void Roster::printAll()
{
    //This is a basic for loop to print all the values in the array starting with 0 and ending in 4
    for (int i = 0; i < 5; i++)
    {
        // I used this-> because classRosterArray is an array of pointers
        cout << this->classRosterArray[i] << endl;
    }
}

// This function is used to remove someone from an array and takes student ID as a parameter
void Roster::remove(string studentID)
{
    // I started with a boolean value set to false
    bool isRemoved = false;
    for(int z = 0; z < 5; z++)
        if (classRosterArray[z] != NULL) // When a value is not empty
        {
            if (studentID == this->classRosterArray[z]->getStudID()) // when studentID has the value from get student DI function
            {
                classRosterArray[z] = nullptr; // Replace that object in the array with null
                isRemoved = true; // Then change the boolean value to true to stop the function
            }
        }
}

void Roster::printAverageDaysInCourse(string studentID)
{
    for (int q = 0; q < 5; q++)
        if (this->classRosterArray[q]->getStudID() == studentID)
        {
            int avgDays, daysAdded = 0;

            daysAdded = ((this->classRosterArray[q]->getDays()[0] + this->classRosterArray[q]->getDays()[1] + this->classRosterArray[q]->getDays()[2]));
            avgDays = daysAdded / 3;

            cout << "Average days in course: " << avgDays;
            cout << "\n\n";
        };
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
    int dayArray[] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    if (degreeProgram == NETWORK)
    {
        classRosterArray[] = new NetworkStudent (studentID, firstName, lastName, emailAddress, age, dayArray, degreeProgram);
    }
}

void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(Degree degreeProgram)
{

}

int main()
{
    string token = ""; //Declaring an empty string called token to move things over
    string myDelimiter = ","; // Declaring my delimiter so I can parse
    /*
        A.Modify the studentData table to include your personal information as the last item.
        This is a given constant array of string provided by the assignment. I added my info at the bottom per the instructions
    */
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Antonio,Peza,apeza1@wgu.edu,25,60,60,60,SOFTWARE", 
    };
    int numElements = (sizeof(studentData) / sizeof(studentData[0])); // Creating my counter for number of elements

    for (int j = 0; j < numElements; j++)
    {
        studentData[j];
        token = studentData[j].substr(0, studentData->find(myDelimiter));
        cout << token;
    }
    

    /*for (int i = 0; i < numElements; i++)
        cout << studentData[i] << endl;*/
    
    //initializing roster class
    Roster classRoster;

    classRoster.printAll();

    classRoster.printAll();
    classRoster.printInvalidEmails();
    //loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.remove("A3");



}