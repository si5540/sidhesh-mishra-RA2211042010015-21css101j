/*
Write a C program to check a number 
for even or odd using ternary operator
also known as conditional operator in c
*/
#include<stdio.h>  
int main()   
{ 
    printf("2211042010015");
    int number;
    
    /* Input a number from user at execution time */
    printf("Enter a number to check for Even / Odd = ");
    scanf("%d", &number);

    /* use conditional operator to check for even odd */
	(number%2==0)? printf("%d is Even",number):printf("%d is Odd",number);
	
	return 0;
}
