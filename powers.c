#include<stdio.h>

int main()
{
    int lim=0,result=2,counter=1;
    scanf("%d",&lim);
    counter=1;
    do
    {
        printf("%d, ",result);
        result*=2;
        counter++;
    }while(counter<=lim);
    return 0;
    
}