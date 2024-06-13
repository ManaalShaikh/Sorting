#include<stdio.h>
void main()
{
	int a[100],t,i,n,key,pass;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(pass=1;pass<n;pass++)
	{
		key=a[pass];
		for(i=pass-1;i>=0 && key>a[i];i--)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("\n Sorted numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);



}
