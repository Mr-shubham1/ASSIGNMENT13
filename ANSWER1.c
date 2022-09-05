#include<stdio.h>
int sumn(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",sumn(n));
    return 0;
}
int sumn(int n)
{
    if(n==0)
    return 0;
    return sumn(n-1)+n;

    
}