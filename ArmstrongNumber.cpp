/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 *  Digit: ArmstrongNumber 
 */
#include <iostream>
using namespace std;

int main()
{
    int orginalNumber, number, remainder, sum = 0, count = 0;

    for (orginalNumber = 1;orginalNumber<=999;orginalNumber++)
    {

        number = orginalNumber;
        ///logic
        while (number!=0)
        {
        remainder = number % 10;
        number = number / 10;
        sum = sum + (remainder*remainder*remainder);
        remainder = number;
        }
        cout<<number<<" = Sum : "<<sum<<endl;
        if(orginalNumber == sum)
        {
            cout<<orginalNumber<<" is an Armstrong Number."<<endl;
            cout<<++count<<endl;
        }
        else
        {
            cout<<orginalNumber<<" is not an Armstrong Number."<<endl;
        }
        sum = 0;
    }
    
    
    
    
    return 0;
}
