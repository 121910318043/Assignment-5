#include<stdio.h>
//program to print the first N odd natural numbers in reverse order.
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n+(n+1 - i*2));
        i++;
    }
    return 0;
}
