//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("Table of %d is\n",n);
    for(i=1;i<=10;i++)
        printf(" %d",i*n);
    return 0;
}