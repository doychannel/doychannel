#include <stdio.h>

void inputarr(int *a,int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a+i);
	}
}

void outputarr(int*a,int n)
{
	int i;
	for (i=0;i<=n;i++)
	{
	printf("%d ",a[i]);	
	}
		
}
	
int ascSelection(int *a, int n)

{
	int minIndex,i,j;
	
		for (i=0;i<=n-1;i++)
	{
		minIndex=i;
		
		for(j=i+1;j<=n;j++) if (a[minIndex]>a[j]) minIndex=j;
		
			if(minIndex>i)
			{
			int t=a[minIndex];
			a[minIndex]=a[i];
			a[i]=t;	
			}
		
	} 
}

int main()
{
	int a[50],n,k;
	printf("Enter n numbers: "); scanf("%d",&n);
	inputarr(a,n);
	ascSelection(a,n);
	outputarr(a,n);
	return 0;
}

