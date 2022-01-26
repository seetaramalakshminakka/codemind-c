#include<stdio.h>
int main ()
{
    int a,b,n=0;
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        n=n*10+b;
        a=a/10;
    }
    printf("%d",n);
    return 0;
}