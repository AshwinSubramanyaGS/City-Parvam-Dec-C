//array and pointers
#include<stdio.h>

int main()
{
	int size=0,i;
    double a[100];
	scanf("%d",&size);
	for( i=0;i<size;scanf("%lf",a+i++));//a+(i*sizeof(*a))

    
    for(i=1;i<size;i++)
    {
        printf("%x %lf\n",a+i,*(a+i));
    }
    return 0;
}