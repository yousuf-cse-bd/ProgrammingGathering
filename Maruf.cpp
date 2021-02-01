#include <iostream>
using namespace std;
void fn2()
{
    cout<<"Function_2"<<endl;
}

void fn1()
{
    cout<<"Function_1"<<endl;
    fn2();
}

int main()
{
    cout<<"Emtiaz Maruf"<<endl;
    fn1();
    return 0;
}

