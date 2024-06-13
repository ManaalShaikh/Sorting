#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int m,int r)
{
	int n1,n2,i,j,k;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	
	for(j=0;j<n2;j++)
		R[j]=a[m+1+j];
	i=j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k++]=L[i++];
		}
		else
		{
			a[k++]=R[j++];
		}
	}
	
	while(i<n1)
	{
		a[k++]=L[i++];
	
	}
	while(j<n2)
	{
		a[k++]=R[j++];
	}
}

void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
	
		mergesort(a,l,m);
		mergesort(a,m+1,r);
	
		merge(a,l,m,r);
	}
}

void main()
{
	int a[100],i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	printf("\n Given n numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	mergesort(a,0,n-1);
	printf("\n");
	printf("\n Sorted numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

}
