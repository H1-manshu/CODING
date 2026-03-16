// 1)
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
            cout<<"* ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        n++;
        k--;
   }
   return 0;
}
*/

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
        n = n + 1;
        k = k - 1;
    }
    return 0;
}*/

// 3) 
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
            cout<<n<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        n++;
        k--;
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
        k--;
        n++;
    }
    return 0;
}
*/

// 5)
/*#include <iostream>
using namespace std;
int main()
{
    char i;
    int j;
    char n = 'a';
    int m = 1;
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=m;i++)
        {
            cout<<n<<" ";
        }
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
        m++;
        n++;
        k--;
    }
    return 0;
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
        k++;
        n--;
    }
    return 0;
}*/

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
        n--;
        k++;
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
    int k = 4;
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
        n--;
        k--;
    }
    return 0;
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
    int n = 1;
    int k = 0;
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
        n++;
        k++;
    }
    return 0;
}*/

// 10)
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
            cout<<" "<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

// 11)
/*#include <iostream>
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
        k--;
        n++;
    }
    return 0;
}*/

// 12)
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
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        n++;
        k--;
    }
    return 0;
}*/

// 13)
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
            cout<<" "<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

// 14)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    char l;
    int j;
    char n = 'A';
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(l='A';l<=n;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
        n++;
        k--;
    }
    return 0;
}*/

// 15)
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
            cout<<" "<<" ";
        }
        for(i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

