#include<stdio.h>
int reverse(int a)
{
    int r,rev=0;
    while(a)
    {
     r=a%10;
     rev=rev*10+r;
     a=a/10;
    }
   return rev;  
}
int main ()
{
int x;
scanf("%d",&x);
do
{
    x+=reverse(x);
}while(x!=reverse(x));
printf("%d",x);
return 0;
}
