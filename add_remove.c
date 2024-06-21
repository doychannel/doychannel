#include <stdio.h>

void inputarr(int *a, int n);
void outputarr(int *a, int n);


//int binarySearch(int x, int *a, int n);

void addOneLast(int a[], int *pn, int value);
int linearSearch(int a[],  int n,int value);
void removeOneMid(int a[],int *pn, int value);
void removeOneLast(int *a, int *pn);
int main()
{
	int a[50];
	int x,n;
	printf("Enter n: \n"); scanf("%d",&n);
	
	inputarr(a,n);
	outputarr(a,n);
	int value;
	printf("enter value: \n"); scanf("%d",&value);
	
	removeOneMid(a,&n,value);
	outputarr(a,n);
	
	return 0;
}

void removeOneLast(int *a, int *pn)
{
	(*pn)--;
}
void addOneLast(int *a, int *pn, int value)
{
		(*pn)++;
	a[*pn]=value;

}
void removeOneMid(int a[],int *pn, int value)
{
	int pos= linearSearch(a,*pn,value);
	if(pos<0) printf("NOT FOUND\n");
	else 
	{
		int i;
		for (i=pos;i<=*pn-1;i++) 
		a[i]=a[i+1];
		(*pn)--;
		
		printf("Removed!!!\n");
	}
}
int linearSearch(int *a, int n, int value)
{
	int i;
	for (i=0;i<=n;i++)
	{
		if (a[i]==value) return i;
	}
	return -1;
}
//int binarySearch(int x, int *a, int n)
//{
//	int l=0,r=n-1,m;
//	while (l<=r)
//	{
//		m=(l+r)/2;
//		if(x==a[m]) return m;
//		if(x>a[m]) l=m+1;
//		else r=m-1;
//	}
//	return -1;
//}



void inputarr(int *a, int n)
{
	int i;
	for (i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a+i);
	}
}
void outputarr(int *a,int n)
{
	int i;
	for (i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}


