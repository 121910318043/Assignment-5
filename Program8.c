#include<stdio.h>
//program to print squares of the first N natural numbers.
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}
