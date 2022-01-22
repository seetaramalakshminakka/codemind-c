#include<stdio.h>
int main ()
{
	int a,b,c,n;
	scanf("%d%d",&b,&n);
	for(a=-1;a<=n;a++)
	{
	    if(a%2==1)
	    {
	    c=b*a; 
		printf("%d x %d = %d
",b,a,c);
	    }
	}
	return 0;
}