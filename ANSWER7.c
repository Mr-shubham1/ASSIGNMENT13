#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("enter two number:");
    printf("first number shoud be greater");
    scanf("%d %d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
   if(a%b==0)
   return b;

   hcf(b,a%b);
}
