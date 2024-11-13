#include<stdio.h>
int main()
{
	int n ; 
	printf("How many rows you want :");
	scanf("%d",&n);
	int a =1 ; 
	for(int i =0 ; i < n ; i++, a+=1)
	{
	for(int k = 0 ; k<i ; k++)
	printf(" ");
	 for(int j = 0; j<n; j++ )
	 printf("* ");
	 printf("\n");
	 
	}
	return 0;
}
