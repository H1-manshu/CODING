/*PRINT 
*
* *
* * *
* * * *
* * * * * _*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT
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
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1 */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=1;
    for(j=1;j<=5;j++)
    {
        for(i=n;i>=1;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n = n+1;
    }
    return 0;
}*/

/*PRINT 
a
b b
c c c
d d d d 
e e e e e  */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    char k = 'a';
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        k = k + 1;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT 
* * * * *
* * * *
* * *
* * 
*   */
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n=5;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        n = n - 1;
    }
    return 0;
}*/

/*PRINT 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1  */

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n = n - 1;
    }
    return 0;
}*/

/*PRINT
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1 */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    for(j=1;j<=5;j++)
    {
        for(i=5;i>=n;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n = n - 1;
    }
    return 0;
}*/

