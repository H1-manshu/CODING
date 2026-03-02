/*Print Pyramid ( 5 Rowed );
    *
   * *
  * * *
 * * * *
* * * * * */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 4;
    int n = 1;
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
}
*/

/*Print Pyramid ( n Rowed );
If user enters 5 then the output should be:
    *
   * *
  * * *
 * * * *
* * * * * 
*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int L;
    cout<<"How many rowed pyramid you want to print?\n: ";
    cin>>L;
    int k = L-n;
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
}*/

/*PRINT
    *
   ***
  *****
 *******
********* */

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 4;
    int n = 1;
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
        n = n + 2;
    }
    return 0;
}*/

/*Print Pyramid ( n Rowed );
If user enters 5 then the output should be:
    *
   ***
  *****
 *******
*********  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    int n = 1;
    cout<<"How many rowed pyramid you want to print?\n: ";
    cin>>L;
    int k = L - n;
    for(j=1;j<=L;j++)
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
        n = n + 2;
    }
    return 0;
}*/

/*PRINT 
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 */
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
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(i=(n-1);i>=1;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

/*Print Pyramid ( n Rowed );
If user enters 5 then the output should be:
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int L;
    cout<<"How many rowed pyramid you want to print?\n: ";
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
        for(i=(n-1);i>=1;i=i-1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT Inverted Pyramid
*********
 *******
  *****
   ***
    *  */
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 0;
    int n = 9;
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
        k = k + 1;
        n = n - 2;
    }
    return 0;
}*/

/*Print Inverted Pyramid ( n Rowed );
If user enters 5 then the output should be:
*********
 *******
  *****
   ***
    *  */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    int k = 0;
    cout<<"How many rowed pyramid you want to print?\n: ";
    cin>>L;
    int n = 2*L - 1;
    for(j=1;j<=L;j++)
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
        k = k + 1;
        n = n - 2;
    }
    return 0;
}*/

/*PRINT 
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
/*PRINT
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 4;
    int k = 2;
    int m;
    int f = 1;
    int g = 6;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=k;i>=3;i=i-1)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    for(m=1;m<=4;m++)
    {
        for(i=1;i<=f;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=g;i++)
        {
            cout<<" ";
        }
        for(i=f;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        g = g - 2;
        f = f + 1;
    }
    return 0;
}
*/
/*PRINT
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * * */
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 4;
    int k = 2;
    int m;
    int f = 1;
    int g = 6;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        for(i=k;i>=3;i=i-1)
        {
            cout<<"  ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    for(m=1;m<=4;m++)
    {
        for(i=1;i<=f;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=g;i++)
        {
            cout<<"  ";
        }
        for(i=f;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        g = g - 2;
        f = f + 1;
    }
    return 0;
}*/

/*PRINT (By taking input, for eg: If I enter 4 then the program should print the below pattern)
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********  */
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many symmetric rowed box you want to print?\n: ";
    cin>>L;
    int n = L;
    int k = 2;
    int m;
    int f = 1;
    int g = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=k;i>=3;i=i-1)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    for(m=1;m<=L;m++)
    {
        for(i=1;i<=f;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=g;i++)
        {
            cout<<" ";
        }
        for(i=f;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        g = g - 2;
        f = f + 1;
    }
    return 0;
}
*/

/*PRINT (By taking input, for eg: If I enter 4 then the program should print the below pattern)

* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *  */

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many symmetric rowed box you want to print?\n: ";
    cin>>L;
    int n = L;
    int k = 2;
    int m;
    int f = 1;
    int g = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        for(i=k;i>=3;i=i-1)
        {
            cout<<"  ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    for(m=1;m<=L;m++)
    {
        for(i=1;i<=f;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=g;i++)
        {
            cout<<"  ";
        }
        for(i=f;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        g = g - 2;
        f = f + 1;
    }
    return 0;
}