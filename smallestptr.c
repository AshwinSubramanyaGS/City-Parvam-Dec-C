//array and pointers
#include<stdio.h>

int main()
{
	int size=0,a[100],i,*small=a;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",a+i++));//a+(i*sizeof(*a))

    
    for(i=1;i<size;i++)
    {
        if(*small >a[i])
        small=&a[i];
    }
    printf("Smallest element is %d",*small);
    

}