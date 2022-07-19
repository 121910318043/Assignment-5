#include<stdio.h>
//program to print the first N even natural numbers.
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*2);
        i++;
    }
    return 0;
}
