// Prime numbers :

// Logic: To check if 'n' is prime, we try to divide it by numbers from 2 to n-1.
// If any number divides 'n' perfectly, then 'n' is NOT a prime number.

/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number\n: ";
    cin>>n;
    if ( n < 2 )
    {
    cout<<"The number "<<n<<" is not prime";
    return 0;
    }
    else
    {
    for (i=2;i<n;i++)
    {
    if (n%i == 0 )
    {
    cout<<"The number "<<n<<" is not prime";
    return 0;
    }
    } 
    }
    cout<<"The number "<<n<<" is prime";
    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cout << "Enter the number\n: ";
    cin >> n;

    // 1. Handle numbers less than 2 (0, 1, negatives)
    if (n < 2) {
        cout << "The number " << n << " is NOT prime";
        return 0; // Stop the program here
    }

    // 2. Check for factors from 2 to n-1
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) {
            // If we find ANY number that divides 'n', it is NOT prime.
            cout << "The number " << n << " is NOT prime";
            return 0; // EXIT THE PROGRAM IMMEDIATELY!
        }
    }

    // 3. If the loop finishes and we are still here, it implies no factors were found.
    // Therefore, it MUST be prime.
    cout << "The number " << n << " is PRIME";
    
    return 0;
} */

// Similar stuff below :
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number\n: ";
    cin>>n;
    if ( n<2 )
    {
        cout<<"The number "<<n<<" is not prime";
        return 0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if (n%i == 0)
            {
                cout<<"The number "<<n<<" is not prime";
                return 0;
            }
        }
        
    }
    cout<<"The number "<<n<<" is prime";
    return 0;
}*/
