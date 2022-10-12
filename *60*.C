/* C program to input two strings
 and check whether both strings are
 the same (equal) or not using stricmp()
 predefined function. stricmp() 
 gives a case insensitive comparison.
 */

#include <stdio.h>
#include <string.h>
int main()
{
   printf("RA2211042010015");
   char str1[100], str2[100];

   printf("Enter first string for comparing (case insensitive)\n");
   gets(str1);

   printf("Enter second string for comparing (case insensitive)\n");
   gets(str2);

   if (stricmp(str1,str2) == 0)
      printf("The strings are equal.\n");
   else
      printf("The strings are not equal.\n");

   return 0;
}
