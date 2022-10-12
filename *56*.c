/*write a c program to print alphabet continous
pattern triangle as shown below
ABCDE
FGHI
JKL
MN
O*/
#include <stdio.h>

int main()  
{
  printf("2211042010015");
  
int row, col, ch=65;
for(row=5; row>=1;row--)
{
for (col=1; col<=row; col++)
{
printf("%c",ch);
ch++;
}
printf("/n");
}
return 0;
}
