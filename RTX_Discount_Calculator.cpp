/*Scenario: You are writing the billing software for an RTX Electronics store.

Requirements:

Input: Ask for the Total Bill Amount (e.g., 500.50).

Logic: * If the bill is over 5000, give a 20% discount.

If the bill is between 2000 and 5000, give a 10% discount.

Otherwise, no discount.

Math Formula:

Discount_Amount = Total * (Percentage / 100)

Final_Bill = Total - Discount_Amount

Output: Display the Discount Amount and the Final Bill.

Example:

Enter Bill: 3000

Discount (10%): 300

Final Amount: 2700
*/


#include <iostream>
using namespace std;
int main()
{
    float bill;
    cout<<"RTX Electronics store discount calculator"<<endl;
    cout<<"Please enter your total bill amount\n: ";
    cin>>bill;
    if ( bill >= 5000 )
    {
        cout<<"Your total bill is: "<<bill - bill*20/100<<"\n 20% discount applied";
    }
    else if ( bill>=2000 && bill<5000 )
    {
        cout<<"Your total bill is: "<<bill - bill*10/100<<"\n 10% discount applied";
    }
    else
    {
        cout<<"Your total bill is: " <<bill<<", No discount applied";
    }
    return 0;
}
