//array 
#include<stdio.h>

int main()
{
	int size=0,a[100],i=0;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",&a[i++]));
    printf("Even:");
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    printf("Odd:");
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }
    return 0;
}