#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}
int fact(int a)
{
    if(a==1)
    return 1;
    return fact(a-1)*a;
}