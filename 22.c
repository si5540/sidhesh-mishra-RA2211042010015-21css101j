/*
Write a C Program 
to input seven days temperature in a float array
then calculate and find average temperature 
of the week. 
*/
#include<stdio.h>

int main()
{
   printf("RA2211042010015");
   float tempArray[7], sum=0,average;
   int i;
   /*input temperatures in array and find sum of these
   using for loop*/
   for(i=0; i<7; i++)
      {
	   printf("Enter Temperature Reading of Day:%d=",i+1);
       scanf("%f", &tempArray[i]);
       sum = sum + tempArray[i];
      }
   /* calculate and show average temperature*/
    average = sum / 7.0;
    printf("The Average Temperature of the week is = %.2f",average);
    return 0;
}
