/*C Program to Generate numerical patterns
	1 1 1 1 1
	2 2 2 2 2 
	3 3 3 3 3
	4 4 4 4 4
	5 5 5 5 5
	*/
#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}