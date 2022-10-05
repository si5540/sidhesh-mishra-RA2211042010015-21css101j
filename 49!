 /* Write a C program
 using nested for loops to print the
 heart shape using stars pattern.

   **   **
  *   *   *
  *       *
   *     *
    *   *
      *

 Perfect C Programming Tutorials
 Author : www.EasyCodebook.com (c)

 Actual Program starts here
 C Program - Heart Shape Star Pattern Program No. 1
*/
#include <stdio.h>

int main()
{

int n,row,col;
n = 6;
for(row=0;row<n;row++)
{
  for(col=0;col<n+1;col++)
     if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
          printf("*");
        else
          printf(" ");

    printf("\n");

}
  return 0;
}
