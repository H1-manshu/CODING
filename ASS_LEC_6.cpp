// 1)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 2)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<10<<" ";
        }
        cout<<endl;
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
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 4)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1 ;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        n++;
    }
    return 0;
}*/

// 5) 
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    for(j=1;j<=5;j++)
    {
        for(i=5;i>=n;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 6
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        n = n - 1;
    }
    return 0;
}*/

// 7)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 8)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<i*i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 9)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=10;i=i+2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 10)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    char k = 'a';
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        k = k + 1;
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
    char k = 'a';
    for(j=1;j<=5;j++)
    {
        for(k='a';k<='e';k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 12)
/*#include <iostream>
using namespace std;
int main()
{
    int j;
    char k;
    for(j=1;j<=5;j++)
    {
        for(k='e';k>='a';k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 13)
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 5;
    int m = 1;
    for(j=1;j<=5;j++)
    {
        for(i=m;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n = n + 5;
        m = m + 5;
    }
    return 0;
}*/

// 14)
/*#include <iostream>
using namespace std;
int main()
{
    char i;
    int j;
    char k = 'a';
    char m = 'e';
    for(j=1;j<=5;j++)
    {
        for(i=k;i<=m;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k = k + 5;
        m = m + 5;
    }
    return 0;
}*/

// Day 8/180: Pattern Printing

// 1)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=6;i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 2)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(j=1;j<=6;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<i*i<<" ";
        }
        cout<<endl;
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
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=6;i++)
        {
            cout<<i*i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// 4)
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    char k = 'F';
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=6;i++)
        {
            cout<<k<<" ";
            k = k + 1;
        }
        cout<<endl;
        k = 'F';
    }
    return 0;
}