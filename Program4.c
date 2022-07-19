#include<stdio.h>
//program to print the first N odd natural numbers.
int main()
{
    int n,i=1,s=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",s,i++);
        s=s+2;
    }
    return 0;
}
