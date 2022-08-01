//4. Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("first %d odd natural no.\n",n);
    for(i=1;i<=(2*n)-1;i=i+2)
        printf(" %d",i);
    return 0;
}