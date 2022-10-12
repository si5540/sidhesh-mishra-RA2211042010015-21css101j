/* Find larger value between two variable
   www.easycodebook.com
 */

#include<stdio.h>
int main()
{
    printf("RA2211042010015");
    int n1,n2;
    printf("Enter value of N1: ");
    scanf("%d",&n1);
    printf("Enter value of N2: ");
    scanf("%d",&n2);   
   
    if(n1>n2)
        printf("N1 is larger");
    else if(n2>n1)
        printf("N2 is larger");
    else
        printf("Both numbers are equal");
    return 0;
}
