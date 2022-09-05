#include<stdio.h>
int sumevn(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",sumevn(n));
    return 0;
}
int sumevn(int n)
{
    if(n==0)
    return 0;
    return sumevn(n-1)+(2*n);
}