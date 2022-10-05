#include <stdio.h>
int main()
{
int n, reverseNum, lastDigit, num;
printf("Enter a number : ");
scanf("%d",&num);
n = num;
reverseNum = 0;
while(n > 0)
{
lastDigit = n % 10;
reverseNum = (reverseNum * 10) + lastDigit;
n = n / 10;
}
if(num == reverseNum)
printf("\n%d is a Palindrome number", num);
else
printf("\n%d is not a Palindrome number", num);
return 0;
}
