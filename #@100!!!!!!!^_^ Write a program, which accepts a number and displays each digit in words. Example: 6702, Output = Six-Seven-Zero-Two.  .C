#include<stdio.h>
int main()
{
    	printf("RA2211042010015")  
      int digit, num,n,l,r=0;
      printf("Enter positive integer number: ");
      scanf("%d", &n);    
      while(n>0)
      {
            l=n%10;
            r=r*10+l;
            n=n/10;
      }
      num = r;
      printf("\nYou have entered: ");
      while (num > 0)
      {
            digit = num % 10;       
            switch(digit)
            {
                  case 0:
                        printf("Zero ");
                        break;
                  case 1:
                        printf("One ");
                        break;
                  case 2:
                        printf("Two ");
                        break;
                  case 3:
                        printf("Three ");
                        break;
                  case 4:
                        printf("Four ");
                        break;
                  case 5:
                        printf("Five ");
                        break;
                  case 6:
                        printf("Six ");
                        break;
                  case 7:
                        printf("Seven ");
                        break;
                  case 8:
                        printf("Eight ");
                        break;
                  case 9:
                        printf("Nine ");
                  break;
            }
      
            num = num / 10;
      }
      return 0;
}
