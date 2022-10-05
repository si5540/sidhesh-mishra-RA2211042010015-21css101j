/* Write a C Program to find
GCD of two numbers
(HCF of two numbers)
*/

#include <stdio.h>
int main()
{
    int num1, num2, i, gcd;

    printf("Enter two integer Numbers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; i++)
    {
        /* Check if i divides the both numbers*/
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    printf("GCD or HCF of %d and %d is %d", num1, num2, gcd);

    return 0;
}
