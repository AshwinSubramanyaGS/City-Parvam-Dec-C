//multiples of 5 in range
#include<stdio.h>

int main()
{
    int ll=0,ul=2,counter=0;
    scanf("%d%d",&ll,&ul);
    counter=ll;
    while(counter<=ul)
    {
        if(counter%5==0)
            printf("%d, ",counter);
        counter++;
    }
    return 0;
    
}