/*
// 1)
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
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<"  ";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
    cout<<endl;
}*/

// 2)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

// 3)
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
        for(i=1;i<=n;i++)
        {
            cout<<n<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        n = n + 1;
        k = k - 1;
    }    
    return 0;
}*/

// 4)
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
        for(i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        k = k - 1;
        n = n + 1;
    }
}*/

// 5)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    char k = 'a';
    int n = 1;
    int m = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<k<<" ";
        }
        for(i=1;i<=m;i++)
        {
            cout<<" ";" ";
        }
        cout<<endl;
        k++;
        n++;
        m--;
    }
    cout<<endl;
}*/

// 6)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    int k = 0;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        n = n - 1;
        k = k + 1;
    }
    return 0;
}
*/

// 7)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    int k = 0;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        k = k + 1;
        n = n - 1;
    }
    return 0;
}*/

// 8)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    int k  = 4;
    for(j=1;j<=5;j++)
    {
        for(i=5;i>=n;i--)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        n = n - 1;
        k = k - 1;
    }
}
*/
// 9)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int k = 0;
    int n = 1;
    for(j=1;j<=5;j++)
    {
        for(i=5;i>=n;i--)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        k++;
        n++;
    }
    return 0;
}*/
