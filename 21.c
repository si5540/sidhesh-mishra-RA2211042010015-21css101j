/*
Write a C Program 
to input 5 numbers in array
of five integers. Display all values 
(elements) in reverse order from array.
Show elements from last to first.
*/
#include<stdio.h>

int main()
{
   printf"RA2211042010015");
   int numArray[5], i;
   /*input in array using for loop*/
   for(i=0; i<5; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%d", &numArray[i]);
      }
   /* show array elements using for loop */
   /* in reverse order */
    printf("The elements of array in Reverse order are:\n");
    for(i=4;i>=0;i--)
      printf("%d\n", numArray[i]);
   
   return 0;
}
