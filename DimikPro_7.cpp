///Author: Muhammad Yousuf Ali
///Since: 13/12/2019

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int i,count,t,j;

    char line[100000];
    count  = 1;
    cout<<"Enter String Here: ";
    cout<<endl;
    scanf("%[^\n]",line);
    for(i = 0; i < 100000; i++)
    {
        if(line[i] == ' ')
        {
            count++;
        }
    }
    cout<<"Counter: "<<count<<endl;
    count = 0;

    return 0;
}
