//Pointer and arrays
#include<stdio.h>

int main()
{
	int n=0,*p=&n;
	scanf("%d",p);
	
    printf("Var n value %d address is %x",n,&n);
    printf("\npointer p target value %d target address is %x pointer address is %x",*p,p,&p);
    return 0;
}