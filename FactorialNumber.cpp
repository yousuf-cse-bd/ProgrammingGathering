/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 30 July 2019
 */

#include <iostream>
using namespace std;

long factorial(long x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x - 1);
    }
    
}

int main(int argc, char const *argv[])
{
    long long int num;
    cout<<"Enter a Positive Valu Here: ";
    cin>>num;

    cout<<num<<" = "<<factorial(num)<<endl;
    return 0;
}
