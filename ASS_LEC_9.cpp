//  1)
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
        n++;
        k--;
    }
    return 0;
}*/

//  2)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
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
        n++;
        k--;
    }
    return 0;
}*/

//  3)

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
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        k--;
        n=n+2;
    }
    return 0;
}*/

//  4)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed pyramid you want to print?\n: ";
    cin>>L;
    int n = 1;
    int k = L-1;
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
        k--;
        n=n+2;
    }
    return 0;
}*/

//  5)
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
        for(i=(n-1);i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n++;
        k=k-2;
    }
    return 0;
}
*/

//  6)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed number pyramid you want to print?\n: ";
    cin>>L;
    int n = 1;
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
        for(i=(n-1);i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k=k-2;
        n++;
    }
    return 0;
}*/

//  7)

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
        k++;
        n=n-2;
    }
    return 0;
}*/

//  8)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed pyramid you want to print?\n: ";
    cin>>L;
    int n = 2*L-1;
    int k = 0;
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
        k++;
        n=n-2;
    }
    return 0;
}*/

//  9)
/*
#include <iostream>
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
        n--;
        k=k+2;
    }
    n++;
    k=k-2;
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
        n++;
        k=k-2;
    }
    return 0;
}*/

//  10)

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Of what symmetricity's box you want to print?\n: ";
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
        n--;
        k=k+2;
    }
    n++;
    k=k-2;
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
        n++;
        k=k-2;
    }
    return 0;
}