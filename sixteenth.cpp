
#include<stdio.h>
int main()
{
    int n ;
	printf("Enter n :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   int num=1;
	  for(int j=0;j<i+1;j++){
	   printf("%d",num);
	num++;}
	printf("\n");
	}
	
	return 0;

}


