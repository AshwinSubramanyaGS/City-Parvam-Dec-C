#include<stdio.h>

int main()
{
    int no=5,mul=0;
    scanf("%d",&no);
    mul=10;
    do
    {
        printf("%d  X  %d  =  %d\n",no,mul,no*mul);
        mul--;
    }while(mul>=1);
    return 0;
    
}