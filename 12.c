#include <stdio.h> 
  
int main() 
{ 
     printf("RA2211042010015");
    int n1, n2, n3, max; 
      
     
    printf("Enter first number=");
	scanf("%d",&n1);
	
	
	printf("Enter second number=");
	scanf("%d",&n2);
	
	printf("Enter third number=");
	scanf("%d",&n3);
	
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3); 
      
     
    printf("Largest number among %d, %d and %d is %d.",n1, n2, n3, max); 
  
    return 0; 
} 
