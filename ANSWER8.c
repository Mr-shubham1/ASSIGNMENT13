#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}
int count(int n)
{
    if(n<10)
    return 1;
    return(1+count(n/10));
}