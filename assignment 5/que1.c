//1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("Print %d times on the screen",n);
    for(i=1;i<=n;i++)
        printf("\nMySirG");
    return 0;

}