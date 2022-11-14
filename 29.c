/*
Write a C Program 
to input ten numbers in array
of ten integers. Display all values from array
*/
#include<stdio.h>

int main()
{
   int numArray[10], i;
   //input in array using for loop
   for(i=0; i<10; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%d", &numArray[i]);
      }
   // show array elements using for loop
    printf("The elements of array are:\n");
    for(i=0;i<10;i++)
      printf("%d\n", numArray[i]);
   
   return 0;
}
