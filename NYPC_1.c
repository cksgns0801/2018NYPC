#include<stdio.h>
int d[100];
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%c ",d[i]);
    }
    

    return 0;
}
