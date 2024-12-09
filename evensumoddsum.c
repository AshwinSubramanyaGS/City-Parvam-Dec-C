//array 
#include<stdio.h>

int main()
{
	int size=0,a[100],i,esum=0,osum=0;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",&a[i++]));

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
        esum=a[i]%2==0 ?esum+a[i] ? esum ;
        osum=a[i]%2!=0 ?osum+a[i] ? osum ;
        /*if(a[i]%2==0)
            esum+=a[i];//
        else 
            osum+=a[i]//*/
    }
    printf("Sum of even %d odd %d",esum,osum);

}