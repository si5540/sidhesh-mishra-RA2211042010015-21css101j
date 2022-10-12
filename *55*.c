/*
Write a program to print number pattern
triangle in c programming language as shown below

   1
   12
   123
   1234
   12345

*/
#include<stdio.h>  
int main()   
{   
	printf("ra2211042010015");
  int row, col;  
  for( row = 1; row <= 5;row++)
  {
  	for(col=1; col<=row; col++)
	   printf("%d",col);   
  	printf("\n");
  }
  return 0;
}
