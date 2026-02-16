// fibonacci sequence ; 
#include <iostream>
using namespace std;
int main()
{
    int i,next;
    int n;
    int a = 0;
    int b = 1;
    cout<<"Which member of fibonacci series you want to print\n: ";
    cin>>n;
    if (n==1)
    {
         cout<<a<<" is the first member of fibonacci series";
    }
    else if (n==2)
    {
        cout<<b<<" is the second member of fibonacci series";
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            next = a + b;
            a = b;
            b = next;
        }
        cout<<next<<" is the "<<n<<"th member of fibonacci series";
        return 0;
    }
}