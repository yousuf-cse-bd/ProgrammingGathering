#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A[5];
    int i;
    long long min,max;
    min = max = 0;
    for(i = 0;i<5;i++)
    {
        cin>>A[i];
    }

    for(i = 0;i<4;i++)
    {
        min = min + A[i];
    }

    for(i = 1 ; i<5;i++)
    {
        max = max + A[i];
    }

    cout<<min<<" "<<max<<endl;
    return 0;
}