#include<stdio.h>

int main()
{
	printf("RA2211042010015")
    int n, i;
	
	long fact=1;
    
	printf("Enter n number to calculate factorial=");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	  fact = fact * i;
	
	printf("Factorial of %d is %ld", n, fact);
	
    return 0;
}
