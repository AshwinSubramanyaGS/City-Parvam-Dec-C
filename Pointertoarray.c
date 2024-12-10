//array and pointers
#include<stdio.h>

int main()
{
	int size=0,a[100],i,*Ap=a;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",a+i));

    //for(i=0;i<size;printf("%d ",*Ap),Ap++,i++);//ap=ap+(1*sizeof(*ap))
    //for(i=0;i<size;printf("%d ",*(Ap+i)),i++);
    for(i=0;i<size;printf("%d ",Ap[i]),i++);
    

}