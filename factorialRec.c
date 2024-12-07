//Factorial
#include<stdio.h>
long fact(int );
int main()
{
	int n=0;
	scanf("%d",&n);
    printf("Factorial of %d is %ld",n,fact(n));
}
long fact(int no)
{
    if(no<=1)return 1;
    return no*fact(no-1);
}