#include<stdio.h>

int main()
{
    int lim=0,result=1,counter=0,x=0;
    scanf("%d%d",&x,&lim);
    counter=0;
    do
    {
        
        result*=x;//result = result*2
        printf("%d, ",result);
        counter++;
    }while(counter<=lim);
    return 0;
    
}