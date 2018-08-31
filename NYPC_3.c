#include<stdio.h>
int main()
{
    int a,b,hp,mp,n,na,ppap;
    
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    
    na=n%a;
    hp=n/a;
    while(a*hp+b*mp!=n)
    {
		ppap=n-(hp*a);
		if(ppap%b==0)
		{
			mp=ppap/b;
			break;
		}
		hp--;
	}
	
    printf("%d %d",hp,mp);
    return 0;
}
