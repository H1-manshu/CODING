
// Sum of n natural numbers;
// Easy method :
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"How many natural numbers you want to sum\n: ";
    cin>>n;
    cout<<n*(n+1)/2;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"How many natural numbers you want to sum?\n: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}*/

// Sum of squares of first n natural numbers;
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"Enter the number of natural numbers whose sum of squares you want to print\n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<"Sum of Squares of first "<<n<<" Natural Numbers is: "<<sum;
    return 0;
}*/

// Sum of squares of first n natural numbers (Basic method):
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number of natural numbers whose sum of squares you want to print\n: ";
    cin>>n;
    cout<<"Sum of squares of first "<<n<<" Natural numbers is: "<<n*(n+1)*(2*n+1)/6<<endl;
    return 0;
}*/
