#include<stdio.h>
//program to print the first N even natural numbers in reverse order.
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n*2);
        n--;
    }
    return 0;
}
