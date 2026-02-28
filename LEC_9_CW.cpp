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

/*PRINT
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

/*Print Pyramid ( n Rowed );
If user enters 5 then the output should be:
*********
 *******
  *****
   ***
    *  */

#include <iostream>
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
}