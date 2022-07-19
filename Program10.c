#include<stdio.h>
//program to print a table of N.
int main()
{
    int n,i=1;
    printf("Enter the table number: ");
    scanf("%d",&n);
    while(i<13)
    {
        printf("%d * %d = %d\n",n,i,i*n);
        i++;
    }
    return 0;
}
