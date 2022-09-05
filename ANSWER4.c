#include<stdio.h>
int sumsquare(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",sumsquare(n));
    return 0;
}
int sumsquare(int n)
{
    if(n==0)
    return 0;
    return sumsquare(n-1)+(n*n);
}