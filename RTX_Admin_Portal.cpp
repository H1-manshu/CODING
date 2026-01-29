/*
The Scenario: You are building the RTX Admin Portal. Only one specific user can access the grading system.

The Requirements:

Step 1: Security Check

Ask for a string username.

If the username is NOT "Admin", print "Access Denied" and end the program.

If it IS "Admin", proceed to Step 2.

Step 2: Grading Logic

Ask for the student's Score (0–100).

Use the following scale:

90 - 100: Grade A (Excellent)

75 - 89: Grade B (Good)

50 - 74: Grade C (Pass)

Below 50: Grade F (Fail)

Crucial: If the score is greater than 100 or less than 0, print "Invalid Score!".

Example Flow:

Username: Admin

Enter Score: 85

Output: Access Granted. Grade: B (Good)
*/

#include <iostream>
using namespace std;
int main()
{
    int A;
    string username;
    cout<<"Welcome to RTX Admin Portal\n";
    cout<<"Enter your username\n: ";
    cin>>username;
    if (username == "Admin")
    {
    cout<<"Kindly enter your score\n: ";
    cin>>A;
    
        if ( A>=90 && A<=100)
        cout<<"Access Granted, Grade A (Excellent)";
        else if (A>=75 && A<=89)
        cout<<"Access Granted, Grade B (Good)";
        else if (A>=50 && A<=74)
        cout<<"Access Granted, Grade C (Pass)";
        else if (A<50 && A>=0) 
        cout<<"Access Granted, Grade F (Fail)";
        else
        cout<<"Invalid Score!";
    }
    else
    cout<<"Access Denied";
    return 0;  
    
}