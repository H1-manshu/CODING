// Compute n!
// Method : 1
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int prod = 1;
    cout<<"Enter the number whose factorial you want to compute\n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    cout<<prod;
    return 0;
}

// Method 2:

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int prod=1;
    cout<<"Enter the number whose factorial you want to compute\n: ";
    cin>>n;
    for (i=n;i>=1;i=i-1)
    {
        prod=prod*i;
    }
    cout<<prod;
}*/