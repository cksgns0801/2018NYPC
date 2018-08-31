#include<stdio.h>
int a[300][300]={0,};
int b[300][300]={0,};

void swap(int t)
{
	int x,y;
	for(x=0; x<t; x++){
        for(y=0; y<t; y++){
            b[t-1-y][x]=a[x][y];
            
        }	
    }
 
    for(x=0; x<t; x++){
        for(y=0; y<t; y++){
        	a[x][y]=b[x][y];  
            //printf("%d ",a[x][y]);
        }
        //printf("\n");
    }
    //printf("-------------------\n");
    
}
int main()
{	
	int n,i,j,sp,k,t;
	
	scanf("%d %d",&n,&sp);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(sp!=1)
	{
		sp=(sp-2)%4;
		sp+=2;
	}
	for(k=0;k<sp;k++)
	{
		for (i=0;i<=n;i++)
		{
		
  			for (j=0;j<=n-2;j++)
    		{
    			if (a[i][j] > a[i][j+1])
    			{
					t=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=t;
    			}
			}	
		}
		swap(n);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
		
}
	




