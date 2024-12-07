/*

	5 4 3 2 1
	5 4 3 2
	5 4 3 
	5 4
	5
*/ 
#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>0+i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}