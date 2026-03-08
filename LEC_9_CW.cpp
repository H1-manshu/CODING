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
}*/

/*PRINT
*      *
**    **
***  ***
********
***  ***
**    **
*      *  */

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 6;
    int n = 1;
    int h = 3;
    int f = 3;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=k;i>=1;i=i-1)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n + 1;
        k = k - 2;
    }
    for(int m=1;m<=3;m++)
    {
        for(i=h;i>=1;i=i-1)
        {
            cout<<"*";
        }
        for(i=f;i>=2;i=i-1)
        {
            cout<<" ";
        }
        for(i=h;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        f = f + 2;
        h = h - 1;
    }
    return 0;
}
*/

/*PRINT
*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * * 
* *         * *
*             * */
/*

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 6;
    int n = 1;
    int h = 3;
    int f = 3;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        for(i=k;i>=1;i=i-1)
        {
            cout<<"  ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        n = n + 1;
        k = k - 2;
    }
    for(int m=1;m<=3;m++)
    {
        for(i=h;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        for(i=f;i>=2;i=i-1)
        {
            cout<<"  ";
        }
        for(i=h;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        f = f + 2;
        h = h - 1;
    }
    return 0;
}*/

/*PRINT (By taking input from the user, if the user enters 4 then print below pattern)
*      *
**    **
***  ***
********
***  ***
**    **
*      *  */

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Enter the butterfly number\n: ";
    cin>>L;
    int k = 2*(L-1);
    int n = 1;
    int h = (L-1);
    int f = 3;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=k;i>=1;i=i-1)
        {
            cout<<" ";
        }
        for(i=n;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n + 1;
        k = k - 2;
    }
    for(int m=1;m<=(L-1);m++)
    {
        for(i=h;i>=1;i=i-1)
        {
            cout<<"*";
        }
        for(i=f;i>=2;i=i-1)
        {
            cout<<" ";
        }
        for(i=h;i>=1;i=i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        f = f + 2;
        h = h - 1;
    }
    return 0;
}
*/

/*PRINT
   * 
  * *
 * * *
* * * *
* * * * 
 * * *
  * *
   *    */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 3;
    int f = 4;
    int h = 0;
    for(j=1;j<=4;j++)
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
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=h;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=f;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        h = h + 1;
        f = f - 1;
    }
    return 0;
}
*/

/*PRINT By taking input, if the user enters 4 then the below pattern must print)
   * 
  * *
 * * *
* * * *
* * * * 
 * * *
  * *
   *    */
/*#include <iostream> 
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Which symmetricity's diamond you want to print?\n: ";
    cin>>L;
    int k = L - 1;
    int n = 1;
    int h = 0;
    int f = L;
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
    for(j=1;j<=L;j++)
    {
         for(i=h;i>=1;i=i-1)
        {
             cout<<" ";
        }
        for(i=1;i<=f;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        h = h + 1;
        f = f - 1;
    }
    return 0;
}
*/

// Try to print it without introducing the new variables h & f
/* * 
  * *
 * * *
* * * *
* * * * 
 * * *
  * *
   *  */
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 3;
    int n = 1;
    for(j=1;j<=4;j++)
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
    k = 3;
    n = 1;
    for(j=1;j<=4;j++)
    {
        for(i=n-1;i>=1;i=i-1)
        {
            cout<<" ";
        }
        for(i=k+1;i>=1;i=i-1)
        {
            cout<<"* ";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
    return 0;
}*/
// Print it without introducing the new variables h & f
/*
*      *
**    **
***  ***
********
***  ***
**    **
*      *

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Enter the butterfly number\n: ";
    cin>>L;
    int k = 2*(L-1);
    int n = 1;
    int h = (L-1);
    int f = 3;
    for(j=1;j<=L;j++)*/
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 6;
    int n = 1;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    n = 3;
    k = 2;
    for(j=1;j<=3;j++)
    {
        for(i=1;i<=n;i=i+1)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
}
*/
// Try to print it without introducing the new variables h & f 
// Using taking input from the user if the user enters 4 then print this;
/* * 
  * *
 * * *
* * * *
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
    int L;
    cout<<"Of which symmetricity's diamond you want to print?\n: ";
    cin>>L;
    int k = L-1;
    int n = 1;
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
    k = L;
    n = 0;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=k;i++)
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

// Print it without introducing the new variables h & f
// If the user enters 4 then print this :
/*
*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Of which symmetricity's butterfly you want to print?\n: ";
    cin>>L;
    int k = 2*(L-1);
    int n = 1;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n + 1;
        k = k - 2;
    }
    n = L-1;
    k = 2;
    for(j=1;j<=(L-1);j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k = k + 2;
        n = n - 1;
    }
    return 0;
}*/

/*PRINT USING MORE CLEANER CODE, THAN THE PREVIOUS ONE:
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********  */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 4;
    int k = 0;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    n = 1;
    k = 6;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT USING MORE CLEANER CODE, THAN THE PREVIOUS ONE:
(By taking input from the user if the user enters 4 then print this:)
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********  */

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Of what symmetricity's pattern you want to print?\n: ";
    cin>>L;
    int n = L;
    int k = 0;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        n = n - 1;
        k = k + 2;
    }
    n = 1;
    k = 2*(L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k = k - 2;
        n = n + 1;
    }
    return 0;
}*/

/*PRINT
* * * * *
* *   * *
* *   * *
* *   * *
*       *
* *   * * */
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(i=1;i<=5;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for(j=1;j<=3;j++)
    {
        for(i=1;i<=1;i++)
        {
            cout<<"* *"<<"   "<<"* *"; 
        }
        cout<<endl;
    }
    for(j=1;j<=1;j++)
    {
        for(i=1;i<=1;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=2;i++)
        {
            cout<<" "<<"  ";
        }
        for(i=1;i<=1;i++)
        {
            cout<<"*";
        }
    }
    cout<<endl;
    for(j=1;j<=1;j++)
    {
        for(i=1;i<=2;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=1;i++)
        {
            cout<<"  ";
        }
        for(i=1;i<=2;i++)
        {
            cout<<"* ";
        }
    }
    return 0;
}