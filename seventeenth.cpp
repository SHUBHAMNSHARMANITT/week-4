
#include <stdio.h>
int main() {
    int n ;
	printf("Enter n :");
	scanf("%d",&n);
   
    for (int i = 1; i <=n; i++) 
    {
         int num=65-i+n; 
        for (int j =1;j<=i; j++) {
            printf("%c",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

