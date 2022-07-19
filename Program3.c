#include<stdio.h>
//program to print the first N natural numbers in reverse order.
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}
