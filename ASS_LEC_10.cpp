            //  Day 12/180 Operator in C++
            //      ASSIGNMENT

// 1)


/*#include <iostream> 
using namespace std;
int main()
{
    int temp;
    cout<<"Enter the current temperature in fahrenheit\n: ";
    cin>>temp;
    if(temp>70 && temp<90)
    {
        cout<<"Temperature is suitable for swimming";
    }
    else
    {
        cout<<"Temperature is not suitable for swimming";
    }
    return 0;
}*/


//  2)

/*#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\n: ";
    cin>>num;
    if(num>0 && (num%2)==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
*/


//  3)

/*
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age\n: ";
    cin>>age;
    if(age>=13 && age<=19)
    {
        cout<<"Teenager";
    }
    else
    {
        cout<<"Not a teenager";
    }
    return 0;
}*/


//  4) 

/*#include <iostream>
using namespace std;
int main() 
{
    int a,b,c;
    cout<<"Enter the first number 'a'\n: ";
    cin>>a;
    cout<<"Enter the second number 'b'\n: ";
    cin>>b;
    cout<<"Enter the third number 'c'\n: ";
    cin>>c;
    
    if(a>b && a>c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}*/


//  5 (i)

/*#include <iostream>
using namespace std;
int main()
{
    cout<<(2*3-48==5/4*6);
}*/
 
/* 2*3-48==5/4*6 Here since * & / are of same precedence below it we have (-) & the least precedence is of (==)
so order of precedence followed for this question -> 
           {*, /} > {-} > {==}
           since * & / have same precedence so we will use the rule of Associativity. Since {*, /, %} have associativity from Left to Right => we are gonna solve left to right
        2*3-48==5/4*6
        -----------> Left to Right
        6 - 48 == 5/4 * 6;
        6 - 48 == 1*6;
        -42 == 6;
        since -42 is not equal to 6 so the output's gonna be 0 (which represents false)
*/

//  5(ii)
/*#include <iostream>
using namespace std;
int main()
{
    cout<<(6<<2-4*8/2);
}*/

/*Order of precedence -> {*, /} > {-} > {<<}
   Since * & / have same precedence so Rule Of Associativity is followed. i.e Left to Right
      6<<2-4*8/2 
      6<<2-32/2
      6<<2-16
      6<<-14
    The expression [ 6<<-14 ] results in Undefined Behaviour because the shift count is negative 
    
    The output may also show: Warning : Left shift count is negative*/

//  5(iii)
/*#include <iostream>
using namespace std;
int main()
{
    cout<<"Answer of 5>4<3/2-8%4+5 is equal to\n: "<<(5>4<3/2-8%4+5);
}*/

/* 5>4<3/2-8%4+5
Precedence order as per precedence table: 
        {/, %} > {+, -} > {<, >}
        Now also using the Rule of Associativity,
        5>4<3/2-8%4+5
        5>4<1-8%4+5
        5>4<1-0+5
        5>4<1+5
        5>4<6
        1<6  Since 6>1 so it is true
        
        Hence the [output = 1] */

//  5(iv)
/*#include <iostream>
using namespace std;
int main()
{
    cout<<"Answer of 14-8+92>>2+70 is equal to\n: "<<(14-8+92>>2+70);
}*/

/*Order of Precedence -> {+,-} > {>>} 

Since we have (+) & (-) which have same precedence so we will use rule of associativity, i.e left to right
         14-8+92>>2+70
         6+92>>2+70
         98>>72
         98 Right shift 72 times
    In general num>>x => num/2^(x) 
    so 98>>72 => 98/2^(72) = 0 

    Hence the output is 0 */