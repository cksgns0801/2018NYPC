#include <stdio.h>
 
int ju[1000][3]={0};
 
void line(int n); //같은 무게일 때 가격이 높은 순으로 정렬
int cal(int n, int w);
int main(void)
{
    int n, w, i, result;
 
    scanf(" %d %d", &w, &n);
 
    for(i=0; i<n; i++)
        scanf(" %d %d", &ju[i][0], &ju[i][1]);
 
    line(n);
 
    /*for(i=0; i<n; i++)
        printf("%d %d \n", ju[i][0], ju[i][1]);*/
 
    result=cal(n, w);
 
    printf("%d", result);
 
    return 0;
}
void line(int n)
{
    int i, j, max, temp;
 
    for(i=0; i<(n-1); i++)
    {
        max=i;
        for(j=i+1; j<n; j++)
        {
            if((ju[max][1]/ju[max][0])<(ju[j][1]/ju[j][0]))
                max=j;
            else if((ju[max][1]/ju[max][0])==(ju[j][1]/ju[j][0]) && ju[max][0]<ju[j][0])
                max=j;
        }
        if(max!=i)
        {
            temp=ju[i][0];
            ju[i][0]=ju[max][0];
            ju[max][0]=temp;
 
            temp=ju[i][1];
            ju[i][1]=ju[max][1];
            ju[max][1]=temp;
        }
    }
}
int cal(int n, int w)
{
    int i, sum=0, weight=0, a;
 
    for(i=0; i<n; i++)
    {
        a=(w-weight)/ju[i][0];
        sum+=a*ju[i][1];
        weight+=a*ju[i][0];
    }
 
    return sum;
}
