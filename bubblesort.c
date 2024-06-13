#include<stdio.h>
void main()
{
	int a[100],i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers=");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int pass,t;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("\n Sorted numbers=");
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);
	
}
