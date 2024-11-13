#include<stdio.h>
int main()
{
	int n ; 
	printf("How many rows you want :");
	scanf("%d",&n);
	for(int i =0 ; i < n ; i++)
	{
		for(int j = 0 ; j<=i ; j++)
		printf("*");
		for(int k = 0 ; k <n-1-i;k++)
		printf(" ");
			for(int k = 0 ; k <n-1-i;k++)
		printf(" ");
		for(int j = 0 ; j<=i ; j++)
		printf("*");
		printf("\n");
	}
	for(int i =0 ; i < n ; i++)
	{
		for(int j = 0 ; j< n-i ; j++)
		printf("*");
		for(int k = 0 ; k <i;k++)
		printf(" ");
			for(int k = 0 ; k <i;k++)
		printf(" ");
		for(int j = 0 ; j< n-i ; j++)
		printf("*");
	
		printf("\n");
	}
	return 0;
}
