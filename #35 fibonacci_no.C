/*
Write a program to input a number n
and display Fibonacci series such that
last term is less than or equal to number n.
*/

#include <stdio.h>
int main()
{
    printf("RA2211042010015")
    int nprintf(" t1 = 0, t2 = 1, nextFib);
    printf("Enter a positive number: ");
    scanf("%d", &n);
    // print the first two terms by definition, 0 and 1
    printf("Fibonacci Series up to number %d is: %d, %d, ",n, t1, t2);
    nextFib = t1 + t2;
    while(nextFib <= n)
    {
        printf("%d, ",nextFib);
        t1 = t2;
        t2 = nextFib;
        nextFib = t1 + t2;
    }
    
    return 0;
}
/*
Output of Fibonacci Series upto given number program in C language is:
Enter a positive integer: 10
Fibonacci Series up to number 10 is: 0, 1, 1, 2, 3, 5, 8, 
*/
