//9. Write a program to print cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("cubes of the first %d natural no.\n",n);
    for(i=1;i<=n;i++)
        printf("\n %d=%d",i,i*i*i);
    return 0;
}