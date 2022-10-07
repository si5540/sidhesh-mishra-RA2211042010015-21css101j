#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
      FILE *fp;
      char fname1[50],ch;
      printf("Enter filename to open for reading : ");
      scanf("%s", fname1);
      // Open one file for reading
      fp = fopen(fname1, "r");
      if (fp == NULL)
      {
            fp = fopen(fname1, "w");
            printf("\n%s file does not exist hence file created..", fname1);
            //exit(0);
      }
      while((ch=fgetc(fp))!=EOF)
      {
            printf("%c", ch);
      }
      fclose(fp);
      return 0;
}
