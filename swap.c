//C Program to Check if a given Integer is Odd or Even
#include<stdio.h>

int main()
{
    int no=0,no2=0;
    scanf("%i%i",&no,&no2);
    
    printf("before swap no1=%d no2=%d",no,no2);
    /*no=no+no2;
    no2=no-no2;
    no=no-no2;
    
    no=no*no2;
    no2=no/no2;
    no=no/no2
    */
    no=no^no2;
    no2=no^no2;
    no=no^no2;
    printf("\nafter swap no1=%d no2=%d",no,no2);
    return 0;
}