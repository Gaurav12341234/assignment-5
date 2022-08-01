//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("first %d odd natural no. in reverse order\n",n);
    for(i=(2*n)-1;i>=1;i=i-2)
        printf(" %d",i);
    return 0;
}