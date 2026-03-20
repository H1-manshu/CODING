// 1

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
            cout<<" "<<" ";
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

// 2)
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed pyramid you want to print ?\n: ";
    cin>>L;
    int k = L-1;
    int n = 1;
    for(j=1;j<=L;j++)
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
        n++;
        k--;
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

// 4)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j; 
    int L;
    cout<<"How many rowed pyramid you want to print?\n: ";
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
        k--;
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
    int k = 3;
    for(j=1;j<=4;j++)
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

// 6)
/*#include <iostream>
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

// 7)
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
            cout<<" "<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n++;
        k--;
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
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int k = L-1;
    int n = 1;
    for(j=1;j<=L;j++)
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
        n++;
        k--;
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
    int n = 65;
    int k = 4; 
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=65;i<=n;i++)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        n++;
        k--;
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
    int k = 4;
    char m;
    char n = 'A';
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(m='A';m<=n;m++)
        {
            cout<<m<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

// 11)
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
    int n = 65;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=65;i<=n;i++)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}*/

// 12)
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
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int n = 1; 
    int k = L-1;
    for(j=1;j<=L;j++)
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
        n++;
        k--;
    }
    return 0;
}*/

// 14)   ( Challenge 1 )
/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 1;
    int k = 2;
    for(j=1;j<=3;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    k = 1;
    n = 2;
    for(j=1;j<=2;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        k++;
        n--;
    }
    return 0;
}*/

// Day 10/180: Pattern Printing-2

// 1)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int n = 1;
    int k = L-1;
    for(j=1;j<=L;j++)
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
        n++;
        k--;
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
    int L;
    cout<<"How many rowed triangle you want to print?\n: ";
    cin>>L;
    int n = 65;
    int k = (L-1);
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=65;i<=n;i++)
        {
            cout<<char(n)<<" ";
        }
        cout<<endl;
        n++;
        k--;
    }
}*/

// 3)

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
    int n = 5;
    int k = L-1;
    for(j=1;j<=L;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=5;i>=n;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n--;
        k--;
    }
    return 0;
}
*/

// 4)

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n = 69;
    int k = 4;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" "<<" ";
        }
        for(i=69;i>=n;i--)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        k--;
        n--;
    }
    return 0;
}*/

// Day 11/180: Pattern Printing- Super Hard

// 1) 
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
            cout<<"*"<<" ";
        }
        cout<<endl;
        k--;
        n++;
    }
    return 0;
}
*/

// 2)
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
            cout<<" "<<" ";
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k--;
        n=n+2;
    }
    return 0;
}
*/

// 3)  (Method 1) ( Method which uses typecasting )
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
    int n = 65;
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
        for(i=(n-1);i>=65;i--)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
        k=k-2;
        n++;
    }
    return 0;
}
*/

// 3 (Method 2) (Method which doesn't use typecasting)

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
    int k = 2*(L-1);
    char m;
    char n = 'A';
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(m='A';m<=n;m++)
        {
            cout<<m<<" ";
        }
        for(m=(n-1);m>='A';m--)
        {
             cout<<m<<" ";
        }
        cout<<endl;
        n++;
        k=k-2;
    }
    return 0;
}

*/
// 4)

/*
#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int L;
    cout<<"Of what symmetricity's diamond you want to print?\n: ";
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
            cout<<"* ";
        }
        cout<<endl;
        n++;
        k--;
    }
    n = n - 1;
    k = k + 1;
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
        k++;
        n--;
    }
    return 0;
}*/

