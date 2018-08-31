#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==0&&b==1)
	{
		printf("IMPOSSIBLE");
		return 0;
	}
	while(a!=0&&b!=0)
	{
		if(a>b)
		{
			a=a%b;
		}
		else
		{
			b=b%a;
		}
		//printf("%d %d\n",a,b);
	}
	
	if(a+b==1)
	{
		printf("POSSIBLE");
	}
	else
	{
		printf("IMPOSSIBLE");
	}
	return 0;
}
