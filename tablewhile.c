#include<stdio.h>

int main()
{
    int no=5,mul=0;
    scanf("%d",&no);
    mul=10;
    while(mul>=1)
    {
        printf("%d  X  %d  =  %d\n",no,mul,no*mul);
        mul--;
    }
    return 0;
    
}