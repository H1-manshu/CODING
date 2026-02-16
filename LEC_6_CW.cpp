// Star pattern printing : USING NESTED LOOP ( LOOP INSIDE A LOOP )
/*PRINT 
* * * * *
* * * * * 
* * * * *
* * * * *
* * * * * */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int j;
    cout<<"Enter the number of stars you want to print\n: ";
    cin>>n;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}*/
// Print a 4x5 matrix with all the elements as 10;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    for ( j=1;j<=4;j++ )
    {
        for ( i=1;i<=n;i++ )
        {
            cout<<"10 ";
        }
        cout<<endl;
    }
return 0;
}*/

/* print  
1 1 1 1 1
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4
5 5 5 5 5*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    int m=1;
    for (j=1;j<=5;j++)
    {
        for (i=1;i<=5;i++)
        {
            cout<<m<<" ";
        }
        cout<<endl;
        m = m + 1;
    }
return 0;
}
*/

/*PRINT
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    for (j=1;j<=n;j++)
    {
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    }
return 0;
}*/

/*PRINT
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    for(j=1;j<=n;j++)
    {
    for(i=5;i>=1;i=i-1)
    {
    cout<<i<<" ";
    }
    cout<<endl;
    }
return 0;
}*/

/*PRINT
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    for(j=1;j<=n;j++)
    {
    for(i=1;i<=n;i++)
    {
        cout<<i*i<<" ";
    }
    cout<<endl;
    }
return 0;
}*/

/*PRINT 
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125*/
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i*i*i<<" ";
        }
        cout<<endl;
    }
return 0;
}*/

/*PRINT 
a a a a a 
b b b b b
c c c c c
d d d d d 
e e e e e*/

// Method 1;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    char k = 'a';
    for (j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        k=k+1;
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
    int n=5;
    int k=97;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<char(k)<<" ";
        }
        cout<<endl;
        k=k+1;
    }
    return 0;
}*/

/*PRINT
a b c d e
a b c d e
a b c d e
a b c d e 
a b c d e
*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    char k = 'a';
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<k<<" ";
            k = k + 1;
        }
        cout<<endl;
        k = 'a';
    }
    return 0;
}*/

/*PRINT 
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    int k = 1 ;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<k<<" ";
            k = k + 1;
        }
        cout<<endl;
    }
    return 0;
}*/

/*PRINT
* * * * * 
* * * * 
* * * 
* * 
* 

*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    for (j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        n = n - 1;
    }
    return 0;
}
*/

