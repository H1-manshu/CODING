/*Programming Challenge: The RTX Smart Cinema 🍿
Scenario: You are developing the ticketing system for the RTX Smart Cinema. The theater has a dynamic pricing model based on the customer's age and the day of the week.

Objective: Write a C++ program that calculates the ticket price for a customer based on the following rules:

Inputs: * The user's Age (integer).

A Day Code (integer: 1 for Monday–Friday, 2 for Saturday–Sunday).

Pricing Logic:

Children (Age < 12): Ticket is always Rs 150.

Seniors (Age >= 60): Ticket is always Rs 200.

Adults (Age 12 to 59):

On Weekdays (Day Code 1), the price is Rs 300.

On Weekends (Day Code 2), the price is Rs 450 (Peak pricing!).

Output: * Display the final ticket price.

If the user enters an invalid Day Code (anything other than 1 or 2), display "Invalid Day Input".

Why this is a good challenge:
It forces you to use Nested if statements (an if inside an if).

It uses Logical operators (&& or ||).

It handles Edge cases (like invalid inputs).

Example Interaction:

Enter Age: 25

Enter Day (1 for Weekday, 2 for Weekend): 2

Final Price: Rs 450
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    int A;
    cout<<"Welcome to RTX Smart Cinema"<<endl;
    cout<<"Enter your age\n: ";
    cin>>age;
    if ( age < 12 )
    cout<<"Ticket price for (Children): Rs 150";
    else if (age >=60 )
    cout<<"Ticket price for (Seniors): Rs 200";
    else if (age>=12 && age<60)
    {
        cout<<"Click '1' for weekdays ticket\n OR  '2' for weekends ticket: ";
        cin>>A;
        if (A==1)
        cout<<"Ticket price for Adults (Weekdays): Rs 300";
        else if (A==2)
        cout<<"Ticket price for Adults (Weekends!!!): Rs 450";
        else
        cout<<"Invalid input, Try again by resarting";
    }
    else
    cout<<"Kindly enter correct age!!";
    return 0;
}