#include<stdio.h>
int main()
{
	int n ; 
	printf("How many rows you want :");
	scanf("%d",&n);
	int a =1 ; 
	for(int i =0 ; i < n ; i++, a+=2)
	{
	for(int k = 0 ; k< n-1 -i ; k++)
	printf("  ");
	 for(int j = 0; j<a; j++ )
	 printf("* ");
	 printf("\n");
	 
	}
	return 0;
}