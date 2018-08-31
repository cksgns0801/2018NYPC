#include<stdio.h>
int main()
{
	int n,i;
	double x,y,xx=0,yy=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x,&y);
		xx+=x;
		yy+=y;
	}
	printf("%lf %lf",xx/n,yy/n);
}
