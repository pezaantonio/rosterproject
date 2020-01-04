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

using namespace std;

int main()
{

    // This is a given constant array of string provided by the assignment. I added my info at the bottom per the instructions
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Antonio,Peza,apeza1@wgu.edu,25,60,60,60,SOFTWARE",
    };

    int numElements = (sizeof(studentData) / sizeof(studentData[0]));

    for (int i = 0; i < numElements; i++)
        cout << studentData[i] << endl;
}