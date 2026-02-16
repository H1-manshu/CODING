// Print numbers from 100 to 200 (Both inclusive);
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 200;
    for ( i=100;i<=n;i++ )
    cout<<i<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    char letter = 'a';
    cout<<"The ASCII value of 'a' is: "<<(int)letter<<endl ;
    return 0;
}*/

// Print alphabets from a to z;

/*#include <iostream>
using namespace std;
int main()
{
    char l;
    for ( l=97;l<=122;l++ )
    cout<<char(l)<<endl;
    return 0;
}*/

// Print alphabets from a to z;
/*#include <iostream>
using namespace std;
int main()
{
    char l;
    for ( l='a';l<='z';l++)
    cout<<l<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int letter = 'z';
    cout<<"The ASCII value of letter "<<'z'<<" is: "<<int(letter)<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    char l = 'a';
    cout<<int(l)+2<<endl;
    return 0;

}*/

/*#include <iostream>
using namespace std;
int main()
{
    char l = 'a';
    cout<<char(l+2)<<endl;
    return 0;
}*/

// Print the positive numbers from 10 to 1 in reversed order;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 1;
    for (i=10;i>=n;i=i-1)
    cout<<i<<endl;
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number from which you need all the positive integers in the reversed order\n: ";
    cin>>n;
    for ( i=n;i>=1;i=i-1)
    cout<<i<<" ";
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 100;
    for (i=1;i<=n;i=i+3)
    cout<<i<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 10;
    for (i=1;i<n;i++)
    cout<<i<<endl;
    return 0;
}*/

// Print table of 6;

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 60;
    for (i=6;i<=n;i=i+6)
    cout<<i<<endl;
    return 0;
}*/

// This method below is not considered good because it involves a lot of process and computation
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 60;
    for (i=1;i<=n;i++)
    if (i%6 == 0)
    cout<<i<<endl;
    return 0;
}*/


/*
 * EFFICIENCY ANALYSIS: METHOD 1 vs. METHOD 2
 * ------------------------------------------
 * Comparison for printing the table of 6 up to 60.
 *
 * WHY METHOD 2 (Checking i%6 == 0) IS LESS EFFICIENT:
 *
 * 1. WASTED ITERATIONS:
 * - Method 2 runs the loop 60 times (visiting 1, 2, 3, 4, 5, etc.).
 * - Method 1 runs the loop only 10 times (jumping 6, 12, 18, etc.).
 * - Method 2 does 600% more looping work for the exact same result.
 *
 * 2. COMPUTATIONAL COST:
 * - Method 2 performs a "Modulo" operation (%) and a conditional check (if)
 * in every single step. Modulo (division) is slower for the CPU than addition.
 * - Method 1 only performs simple Addition (i + 6), which is very fast.
 *
 * VERDICT:
 * Always prefer Method 1 (Step Loops) over Method 2 (Modulo Checks) for generating
 * fixed sequences like multiplication tables.
 */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 10;
    for (i=1;i<=n;i++)
    cout<<6*i<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int num,n;
    int power;
    cout<<"Enter the number\n: ";
    cin>>num;
    n=num;
    cout<<"Enter the power to which you want to raise this number\n: ";
    cin>>power;
    for(i=1;i<power;i++)
    cout<<(num=num*n)<<endl;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int num,n;
    int power;
    cout<<"Enter the number\n: ";
    cin>>num;
    n = num;
    cout<<"Enter the power to which you want to raise that number\n: ";
    cin>>power;
    for (i=1;i<power;i++)
    cout<<(num=num*n)<<endl;
    cout<<"So "<<n<<" Raised to Power "<<power<<" is "<<num;
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n,num;
    int power;
    cout<<"Enter the number\n: ";
    cin>>n;
    num = n;
    cout<<"Enter the power you want raise to this number\n: ";
    cin>>power;
    for(i=1;i<power;i++)
    {
        num=num*n;
    }
    cout<<num;
}*/

// Sum of n natural numbers;
// Easy method :
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"How many natural numbers you want to sum\n: ";
    cin>>n;
    cout<<n*(n+1)/2;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"How many natural numbers you want to sum?\n: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}*/

// Sum of squares of first n natural numbers;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"Enter the number of natural numbers whose sum of squares you want to print\n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<"Sum of Squares of first "<<n<<" Natural Numbers is: "<<sum;
    return 0;
}*/

// Sum of squares of first n natural numbers (Basic method):
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number of natural numbers whose sum of squares you want to print\n: ";
    cin>>n;
    cout<<"Sum of squares of first "<<n<<" Natural numbers is: "<<n*(n+1)*(2*n+1)/6<<endl;
    return 0;
}*/

// Compute n!
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int prod = 1;
    cout<<"Enter the number whose factorial you want to compute\n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    cout<<prod;
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int prod=1;
    cout<<"Enter the number whose factorial you want to compute\n: ";
    cin>>n;
    for (i=n;i>=1;i=i-1)
    {
        prod=prod*i;
    }
    cout<<prod;
}*/

// Prime Numbers:

// Logic: To check if 'n' is prime, we try to divide it by numbers from 2 to n-1.
// If any number divides 'n' perfectly, then 'n' is NOT a prime number.

/*#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cout << "Enter the number\n: ";
    cin >> n;

    // 1. Handle numbers less than 2 (0, 1, negatives)
    if (n < 2) {
        cout << "The number " << n << " is NOT prime";
        return 0; // Stop the program here
    }

    // 2. Check for factors from 2 to n-1
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) {
            // If we find ANY number that divides 'n', it is NOT prime.
            cout << "The number " << n << " is NOT prime";
            return 0; // EXIT THE PROGRAM IMMEDIATELY!
        }
    }

    // 3. If the loop finishes and we are still here, it implies no factors were found.
    // Therefore, it MUST be prime.
    cout << "The number " << n << " is PRIME";
    
    return 0;
} */

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