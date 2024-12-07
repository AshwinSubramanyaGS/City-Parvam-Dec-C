//Factorial
#include<stdio.h>

int main()
{
	int n=0;
    long fact=1;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
		fact*=i;
    printf("Factorial of %d is %ld",n,fact);
}