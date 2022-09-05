#include<stdio.h>
int sumdgt(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",sumdgt(n));
    return 0;
}
int sumdgt(int n)
{
    if(n==0)
    return 0;
    return sumdgt(n/10)+n%10;
}