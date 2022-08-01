//6. Write a program to print the first N even natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("first %d even natural no.\n",n);
    for(i=2;i<=2*n;i=i+2)
        printf(" %d",i);
    return 0;
}