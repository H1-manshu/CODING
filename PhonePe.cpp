#include <iostream>
#include <string>
using namespace std;
int main()
{
    string upiPin, confirm;
    int amount;
    char A;
    cout<<"Enter The Amount\n : ";
    cin>> amount;
    cout<<"Opening The Payment Gateway -- Hold On\n";
    cout<<"Enter Your 6 Digit UPI PIN: ";
    cin>>upiPin;
    cout<<"Press 'A' To Confirm The Payment: ";
    cin>>A;
    cout<<"Rs "<<amount<<" Is Successfully debited\n";
    cout<<"Thanks For Using Our Services";
}