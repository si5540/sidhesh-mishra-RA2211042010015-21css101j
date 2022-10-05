/* Write a C program to input a binary number,
 and convert into correspondin Decimal number 
     www.easycodebook.com
*/ 
#include<stdio.h>
#include<math.h>

int main()
{
	long int binNum,rem,n,i,decimal;
	printf("Enter a Binary Number:");
	scanf("%ld",&binNum);
	i=0;
	decimal=0;
	for(n=binNum;n!=0;n=n/10)
	{
		rem=n%10;
		decimal=decimal+rem*pow(2,i);
		i++;
	}
	printf("Decimal Number:%ld ",decimal);
	return 0;
}
