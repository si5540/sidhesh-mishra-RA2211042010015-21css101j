/*Write a C Program to print 
the square number pattern
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
#include <stdio.h>
int main()
{
	printf("RA2211042010015");
    int row, col, num;
    for(row=1;row<=5;row++)
    {
        num = row;
		for(col=1;col<=5;col++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
