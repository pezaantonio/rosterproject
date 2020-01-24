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
#include "Degree.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "Student.h"
#include "Roster.h"

using namespace std;

Roster::Roster()
{
    this->capacity = capacity;
    this->lastStudent = -1;//Means empty
    this->classRosterArray = nullptr;
}

Roster::Roster(int capacity)
{
    this->capacity = capacity;
    this->lastStudent = -1;
    this->classRosterArray = new Student * [capacity];
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
    int dayArray[] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    if (degreeProgram == NETWORK)
    {
        // classRosterArray[] = new NetworkStudent (studentID, firstName, lastName, emailAddress, age, dayArray, degreeProgram);
    }
}
//Functions for roster.h

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

void Roster::parse(string studentDataLine)
{
    string token = ""; //Declaring an empty string called token to move things over
    string myDelimiter = ","; // Declaring my delimiter so I can parse
    int numElements = (sizeof(studentDataLine) / sizeof(studentDataLine[0])); // Creating my counter for number of elements
    for (int j = 0; j < numElements; j++)
    {
        token = studentDataLine[j].substr(0, studentDataLine->find(myDelimiter));
        cout << token;
    }
}

void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(Degree degreeProgram)
{

}

void Roster::printAll()
{
    //This is a basic for loop to print all the values in the array starting with 0 and ending in 4
    for (int i = 0; i < 5; i++)
    {
        // I used this-> because classRosterArray is an array of pointers
        cout << this->classRosterArray[i] << endl;
    }
}

int main()
{
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
    
    //initializing roster class
    Roster classRoster;

    classRoster.parse(studentData[0]);
    classRoster.parse(studentData[1]);
    classRoster.parse(studentData[2]);
    classRoster.parse(studentData[3]);
    classRoster.parse(studentData[4]);


    /*classRoster.printAll();

    classRoster.printAll();
    classRoster.printInvalidEmails();
    //loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse();
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.remove("A3");*/



}