//C Program to Check if a given Integer is positive or negative
#include<stdio.h>

int main()
{
    int no=0,x;
    scanf("%i",&no);
    //x=(no%2==0)?printf("%d is even",no) : printf("%d is odd",no);
    printf("%d is %s",no,(no>=0)?"Positive" : "Negative");
    return 0;
}