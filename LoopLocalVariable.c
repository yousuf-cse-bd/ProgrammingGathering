#include <stdio.h>

/***
 *  for(int i = 0; i!=10;i++)
 *  {
 *     printf(("Local variable Does not Support in C");
 *  }
 * 
 */

int main(void)
{   int i;
    for( i = 0;i!=10;i++) 
    {
        printf("%d\t",i);
    }

    return 0;
}