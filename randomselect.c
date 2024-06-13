#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,pass,a[100],n,index,min,t;
	printf("Enter limit:");	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}	
	printf("\n Random number:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	for(pass=0;pass<n;pass++)	
	{
		min=a[pass];		
		index=pass;		
		for(i=pass+1;i<n;i++)	
		{
			if(a[i]<min)	
			{
				min=a[i];
				index=i;
			}
		}
		
				t=a[pass];
				a[pass]=min;
				a[index]=t;
	}
	printf("\n Sorted numbers=");
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);
}
