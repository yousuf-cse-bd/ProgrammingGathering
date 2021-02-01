#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

int main()
{
    printf("short int is: %d bytes\n", sizeof(short int));
    cout<<"int is: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int is: "<<sizeof(unsigned int)<<" bytes"<<endl;

    getch();
    return 0;
}
