#include<stdio.h>

int main()
{
    int no=5,mul=0;
    scanf("%d",&no);
    for(mul=10;mul>=1;mul--)
        printf("%d  X  %d  =  %d\n",no,mul,no*mul);
    return 0;
    
}