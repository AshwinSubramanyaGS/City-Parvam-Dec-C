#include <stdio.h>

int main()
{
    short i=1;
    
    while(i>0)
    {
        printf("%d\n",i++);
    }
    printf("after loop= %d\n",i);

    return 0;
}