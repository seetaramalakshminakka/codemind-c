#include<stdio.h>
int main ()
{
     int a,b,p=1,s=0,n;
    scanf("%d",&a);
    for(;a>0;)
    {
     b=a%10;
     s=s+b;
     p=p*b;
     a=a/10;
    }
    n=p-s;
    {
        printf("%d",n);
    }
    return 0;
}