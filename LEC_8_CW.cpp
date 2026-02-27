/*PRINT 
        *
      * *
    * * *
  * * * *
* * * * *  */

// Method 1
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
    return 0;
}*/

// Method 2
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 8;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}
*/

/*PRINT By taking the input from the user of how many rows they want to print of it;
        *
      * *
    * * *
  * * * *
* * * * *  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    int n = 1;
    cout<<"How many rows triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/
// Logic : 5 Rows --> 8 initial spaces ; 6 rows --> 10 initial spaces ; 7 rows --> 12 initial spaces so inital spaces(k) = 2L-2 where L is the number of rows, n = 1 (fixed) as in any triangle we start with a single star only and k = 2(L-1)

/*PRINT
    *
   * * 
  * * * 
 * * * * 
* * * * *  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
    return 0;
}*/
// Observe that n + k = 5 (constant) so k = (5 - n) where 5 is the number of rows of pyramid.

/*
================================================================================
Problem Title: Centered Star Pyramid

Problem Statement:
Write a C++ program that takes a single integer 'L' as input from the user, 
representing the total number of rows, and prints a perfectly centered pyramid 
constructed of asterisks (*). 

Constraints & Formatting:
- The program should prompt the user with: 
  "Pyramid of how many rows you want to print?:"
- The i-th row (where i ranges from 1 to L) must contain exactly 'i' asterisks.
- Each asterisk in a row must be followed by a single space.
- The pyramid must be mathematically centered by printing the exact number of 
  leading spaces before the first asterisk of each row.

Sample Input:
5

Sample Output:
    *
   * * 
  * * * 
 * * * * 
* * * * *   */ 
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int L;
    // int k = (L-n); Wrong !!! You are calculating k = (L-n) before the user actually types in the value of L! 
    cout<<"Pyramid of how many rows you want to print?\n: ";
    cin>>L;
    int k = (L-n); // Now you're right as L is now known, so we can calculate k
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
    return 0;
}
    */
// Observe that n + k = L (constant) so k = (L - n) where L is the number of rows of pyramid.

/*PRINT
      1
    2 2
  3 3 3
4 4 4 4  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 6;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/
/*
PRINT ( Constraint :   1<= input <=9 )
Input: 3 (Take the input from the user:)
Output:
      1
    2 2
  3 3 3

Input: 5 (Take the input from the user:)
Output:
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5*/

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for (j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0 ;
}
*/

/*PRINT
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5 */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n  = 1;
    int k = 8;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

/*Now take user input if it enters 5 then print
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}
*/

/*PRINT 
        A
      A B
    A B C
  A B C D
A B C D E */
/*
// Method 1: (The ASCII Value / Type Casting Approach)

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 65;
    int k = 8;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=65;i<=n;i++)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

// Method 2: (The Character Literal / Direct Manipulation Approach )
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    char n = 'A';
    char m = 'A';
    int k = 8;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(n='A';n<=m;n++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        k = k - 2;
        m = m + 1;
    }
    return 0;
}
*/
/*PRINT (Taking input from the user()How many rowed triangle you want to print?)
        A
      A B
    A B C
  A B C D
A B C D E  */
/*

Method 1 ;

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    int n = 65;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=65;i<=n;i++)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}
*/

// Method 2;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    char n = 'A';
    char m = 'A';
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(n='A';n<=m;n++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        k = k - 2;
        m = m + 1;
    }
    return 0;
}*/

/*PRINT
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1 */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 8;
    int n = 1;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}
*/
/*PRINT (By taking input from the user if the user enters 5 then print this:) 
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1 */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    int n = 1;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

