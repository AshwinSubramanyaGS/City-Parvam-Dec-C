
#include<stdio.h>   
int main()  
{
	int n=10, k=5;
	int num;
	scanf("%d",&num);
	if(num>=1 && num<=10&& n-num>=0)
	{
    		printf("NUMBER OF CANDIES SOLD : %d\n",num);
    		printf("NUMBER OF CANDIES LEFT : %d",n-num>k? n-num:10);
	}
	else
	{
    		printf("INVALID INPUT\n");
    		printf("NUMBER OF CANDIES LEFT : %d",n);
	}
	return 0;
}
