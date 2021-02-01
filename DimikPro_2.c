/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 27 September 2019
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T,i;
    char n[101];

    scanf("%d",&T);
    for(i = 1;i<=T;i++)
    {
        scanf("%s",n);

        int num = (int)n[101];

        printf("Num = %d\n",num);
        if(num % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("even\n");
        }
        
    }

    return 0;
}
