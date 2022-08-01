//8. Write a program to print squares of the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("squares of first %d natural no.\n",n);
    for(i=1;i<=n;i++)
        printf("\n%d=%d",i,i*i);
    return 0;
}