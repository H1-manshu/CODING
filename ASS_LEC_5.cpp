// I. Basic Loops & Ranges

/*1) 
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=100;i<=200;i++)
    {
        cout<<i<<" ";
    }
    cout<<"\nAbove are the numbers from 100 to 200 (inclusive)";
    return 0;
}
*/

//2)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
        cout<<i<<" ";
    }
    return 0;
}
*/

//3)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n; 
    cout<<"Enter the number from which you want to print all the natural numbers in reversed order\n: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
    return 0;
}*/

//4)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int m;
    cout<<"Select the stepsize\n: ";
    cin>>m;
    cout<<"How many natural numbers you want to print with a step size of: "<<m<<"\n: ";
    cin>>n;
    for(i=1;i<=m*n;i=i+m)
    {
        cout<<i<<" ";
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int m;
    cout<<"Select the stepsize\n: ";
    cin>>m;
    cout<<"How many Whole numbers you want to print with a step size of: "<<m<<"\n: ";
    cin>>n;
    for(i=0;i<=m*(n-1);i=i+m)
    {
        cout<<i<<" ";
    }
    return 0;
}*/

// II. Data Types & ASCII (Characters)
// 6) Printing without typecasting:
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    char k = 'a';
    for(i=1;i<=26;i++)
    {
        cout<<k<<" ";
        k = k + 1;
    }
    return 0;
}
*/
// 6) Printing using typecasting:
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int k = 97;
    for(i=k;i<=122;i++)
    {
        cout<<char(i)<<" ";
    }
    return 0;
}*/

// 7)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    char k = 'a';
    for(i=1;i<=26;i++)
    {
        cout<<"The (ASCII) value of character '"<<k<<"' is: ";
        cout<<int(k);
        k = k + 1;
        cout<<endl;
    }
    return 0;
}*/

// 8)

// III. Mathematical Algorithms

// 11 )

/*#include <iostream>
using namespace std;
int main()
{
    int i; 
    int m = 0;
    int n;
    cout<<"How many natural numbers you want to sum?\n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        m = m + i;
    }
    cout<<m<<" is the sum of first "<<n<<" Natural numbers";
    return 0;
}*/

// 12)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"For how many first 'n' natural numbers you want the sum for?\n: ";
    cin>>n;cout<<endl;
    cout<<"The sum of first "<<n<<" Natural numbers is: "<<n*(n+1)/2;
    return 0;
}*/

// 13)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 0; 
    int m;
    cout<<"For how many first 'n' natural numbers you want to sum the squares of?\n: ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        n = n + i*i;
    }
    cout<<"Sum of squares of first "<<m<<" Natural Numbers is: "<<n;
    return 0;
}*/

// 14)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 1;
    int m;
    cout<<"Enter the number whose factorial you want to compute\n: ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        n = n * i;
    }
    cout<<m<<"! is equal to: "<<n;
    return 0;
}*/

// 15)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int m;
    int n;
    cout<<"Enter the number to which you want to raise the  power\n: ";
    cin>>n;
    m = n;
    int p;
    cout<<"Enter the power you want to raise on "<<n<<"\n: ";
    cin>>p;
    for(i=1;i<=1;i++)
    {
        n = n*i;
    }
    for(i=1;i<=(p-1);i++)
    {
        n = n*m;
    }
    cout<<m<<" raised to power "<<p<<" is: "<<n;
    return 0;
}
*/

// 17)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 1;
    for(i=6;i<=60;i=i+6)
    {
        cout<<"6 x "<<n<<" = "<<i<<endl;
        n = n + 1;
    }
    return 0;
}*/

// 17)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 6;
    for(i=1;i<=60;i++)
    {
        if(i%6 == 0 )
        {
            cout<<i<<endl;
        }
    }
    cout<<"Above is the multiplication table of 6";
    return 0;
}*/

// 21)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number whose prime status you want to check\n: ";
    cin>>n;
    if(n==1)
    {
        cout<<"1 is neither prime nor composite";
    }
    if(n<=0)
    {
        cout<<"Non positive integers are not primes";
    }
    if (n>=2)
    {
    for(i=2;i<n;i++)
    {
        if(n%i == 0 )
        {
            cout<<"Number "<<n<<" is not a prime number";
            return 0;
        }
    }
    cout<<"Number "<<n<<" is a Prime number";
    }
    return 0;
}*/

// 24)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 0;
    int m = 1;
    int num;
    int R; 
    cout<<"Which member of fibonacci series you want to print\n: ";
    cin>>R;
    if(R==1)
    {
        cout<<"0 is the first member of fibonacci series";
        return 0;
    }
    for(i=1;i<=(R-1);i++)
    {
        num = m + n;
        m = n;
        n = num;
    }
    cout<<num<<" is the "<<R<<"th member of the fibonacci series";
    return 0;
}*/


// Day 5/180: For Loop in advance :

// 1)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 280;
    for(i=n;i>=250;i--)
    {
        cout<<i<<" ";
    }
}*/

// 2)
// Method 1 (Without Typecasting)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    char k = 'A';
    for(i=1;i<=26;i++)
    {
        cout<<k<<" ";
        k = k + 1;
    }
    return 0;
}*/

// Method 2 (Using Typecasting)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 91;
    for(i=65;i<n;i++)
    {
        cout<<char(i)<<" ";
    }
    return 0;
}
*/

// 3)
// Method 1 (Without Typecasting)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    char k = 'Z';
    for(i=1;i<=26;i++)
    {
        cout<<k<<" ";
        k--;
    }
    return 0;
}*/

// Method 2 (With Typecasting)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 90;
    for(i=1;i<=26;i++)
    {
        cout<<char(n)<<" ";
        n--;
    }
    return 0;
}*/

// 4)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 730;
    for(i=220;i<=n;i=i+7)
    {
        cout<<i<<" ";
    }
    return 0;
}*/

// 5) 
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 0;
    int m;
    cout<<"For how many natural numbers you want to sum the sqares of?\n: ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        n = i*i + n;
    }
    cout<<n<<" is the sum of squares of first "<<m<<" Natural numbers";
    return 0;
}*/

// 6)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 0;
    int m;
    cout<<"For how many first n natural numbers you want to sum the cubes of?\n: ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        n = i*i*i + n;
    }
    cout<<n<<" is the sum of cubes of first "<<m<<" Natural numbers";
    return 0;
}*/

