/*
Write a C Program 
to input 5 numbers in array
of five integers. Find and Display maximum
or largest number in array
*/
#include<stdio.h>

int main()
{
   printf("RA2211042010015")
   int numArray[5], i, max;
   /*input in array using for loop*/
   for(i=0; i<5; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%d", &numArray[i]);
      }
      /* suppose first number in array is maximum */
    max = numArray[0]; 
    for(i=1;i<5;i++)
      if(numArray[i]>max)
        max = numArray[i];
    printf("Maximum or Largest Number in Array is %d\n", max);
   
   return 0;
}
