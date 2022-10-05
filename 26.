/* C Program Bubble Sort  by EasyCodeBook.com*/
#include <stdio.h>

int main()
{
  int array[100], n, i, j, temp;

  printf("Enter number of elements in array = ");
  scanf("%d", &n);

  printf("Enter %d numbers in array\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use < */
      {
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  
  

  printf("Sorted array in ascending order is as follows:\n");

  for (i = 0; i < n; i++)
     printf("%d\t", array[i]);

  return 0;
}
