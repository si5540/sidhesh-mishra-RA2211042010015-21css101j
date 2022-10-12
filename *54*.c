/*
Write a program to print number pattern
square shape 5 to 1 in c programming 
language as shown below

   55555
   44444
   33333
   22222
   11111
*/ 
#include<stdio.h>  
int main()   
{   
  int row, col;  
  for( row = 5; row >=1;row--)
  {
  	for(col=1; col<=5; col++)
	   printf("%d",row);   
  	printf("\n");
  }
  return 0;
}
