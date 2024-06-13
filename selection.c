#include<stdio.h>
void main()
{
	int i,pass,a[100],n,index,min,t;
	printf("Enter limit:");	//3
	scanf("%d",&n);
	printf("Enter n numbers=");	//30 15 20
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(pass=0;pass<n;pass++)	//0 
	{
		min=a[pass];		//a[0]=30
		index=pass;		//index=0
		for(i=pass+1;i<n;i++)	//i=0+1=1
		{
			if(a[i]<min)	//15 30 20      15 20 30
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
