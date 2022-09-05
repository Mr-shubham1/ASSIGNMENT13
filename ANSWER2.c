#include<stdio.h>
int sumodd(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",sumodd(n));
    return 0;
}
int sumodd(int n)
{
    if(n==0)
    return 0;
    return sumodd(n-1)+(2*n-1);
}