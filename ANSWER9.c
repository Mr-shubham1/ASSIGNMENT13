#include<stdio.h>
int fib(int);
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
}
int fib(int i)
{
    if(i==1||i==2)
    return 1;
    return fib(i-1)+fib(i-2);
}