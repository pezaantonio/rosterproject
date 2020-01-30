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
Roster::Roster()
{
    this->capacity = capacity;
    this->lastStudent = -1; //Means empty
    this->classRosterArray = nullptr;
}

Roster::Roster(int capacity)
{
    this->capacity = capacity;
    this->lastStudent = -1;
    this->classRosterArray = new Student * [capacity];
}

void Roster::parseThenAdd(string studentDataLine)
{
    Degree studentDegreeProgram;

    for (int i = 0; i < 5; i++)
    {
        stringstream sdl(studentDataLine[i]);

        vector <string> token;

        while (sdl.good()) 
        {
            string substr;
            getline(sdl, substr, ',');
            token.push_back(substr);
        }
        if (token[8] == "NETWORK")
        {
            studentDegreeProgram = Degree::NETWORK;
        }
        if (token[8] == "SECURITY")
        {
            studentDegreeProgram = Degree::SECURITY;
        }
        if (token[8] == "SOFTWARE") 
        {
            studentDegreeProgram = Degree::SOFTWARE;
        }
        add(token[0], token[1], token[2], token[3], stoi(token[4]), stoi(token[5]), stoi(token[6]), stoi(token[7]), studentDegreeProgram);
     
    /*if (lastStudent < capacity)
    {
        lastStudent++;
        Degree degreeType;
        
        if (studentDataLine[8] == "NETWORK")
        {
            degreeType = NETWORK;
        }
        else if (studentDataLine[8] == "SECURITY")
        {
            degreeType = SECURITY;
        }
        else if (studentDataLine[8] == "SOFTWARE")
        {
            degreeType = SOFTWARE;
        }
        
        //looking for student ID
        int rhs = studentDataLine.find(","); //int rhs is right hand side
        string tempStudID = studentDataLine.substr(0, rhs);

        //looking for first name
        int lhs = rhs + 1; // int lhs is left hand side
        rhs = studentDataLine.find(",", lhs);
        string tempFirstName = studentDataLine.substr(lhs, rhs - lhs);

        //looking for last Name
        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        string tempLastName = studentDataLine.substr(lhs, rhs - lhs);

        // looking for email
        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        string tempEmail = studentDataLine.substr(lhs, rhs - lhs);

        // looking for age
        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        int tempAge = stoi(studentDataLine.substr(lhs, rhs - lhs));

        //reading the days now
        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        int tempDay1 = stoi(studentDataLine.substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        int tempDay2 = stoi(studentDataLine.substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentDataLine.find(",", lhs);
        int tempDay3 = stoi(studentDataLine.substr(lhs, rhs - lhs));

        add(tempStudID, tempFirstName, tempLastName, tempEmail, tempAge, tempDay1, tempDay2, tempDay3);*/
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
    int daysInCourse[Student::daysArraySize];
    daysInCourse[0] = daysInCourse1;
    daysInCourse[1] = daysInCourse2;
    daysInCourse[2] = daysInCourse3;

    if (degreeProgram == Degree::NETWORK)
    {
        classRosterArray[tempCounter++] = new networkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    }
    if (degreeProgram == Degree::SECURITY)
    {
        classRosterArray[tempCounter++] = new securityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    }
    if (degreeProgram == Degree::SOFTWARE)
    {
        classRosterArray[tempCounter++] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
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
    for (int i = 0; i < 5; i++) {
        if ((*classRosterArray[i]).getStudID() == studentID) 
        {
            int avg = 0;
            avg = ((*classRosterArray[i]).getDays()[0] + (*classRosterArray[i]).getDays()[1]
                + (*classRosterArray[i]).getDays()[2]) / 3;
            cout << "The average days it took the student with studentID: " << studentID << " to finish 3 courses: " << avg << '\n';
        }
    }
    cout << '\n';
}

void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(Degree degreeProgram)
{

}

void Roster::printAll()
{
    cout << "Roster: \n\n";
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

    for (int i = 0; i < 5; i++)
    {
        classRoster.parseThenAdd(studentData[i]);
    }


    /*classRoster.printAll();

    classRoster.printAll();
    classRoster.printInvalidEmails();
    //loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse();
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.remove("A3");*/



}