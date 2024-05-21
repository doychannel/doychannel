#include <stdio.h>

void addvalue(int *a, int *pn, int value);
int linearsearch(int *a, int n, int value);
void inputarr(int *a, int n);
void printarr(int *a, int n);
void printarr2(int a[], int n);
void showrange(int *a, int max, int min, int n);
void ascSelectionsort(int *a, int  n);
void showmenu();
int main()
{
	
	int choice;
	int n,value, a[30];
		printf("Enter n elements\n"); scanf("%d",&n);
		inputarr(a,n);
		showmenu();
	do
    {
	scanf("%d",&choice);
	switch (choice)
    {
		case 1:
		{
		printf("Add X: \n"); scanf("%d",&value);
		addvalue(a,&n,value);
		printarr(a,n); break;
		}
		case 2:
		{ 
		printf("Search X: \n"); scanf("%d",&value);
		int r=linearsearch(a,n,value);
		if(r==-1) printf("NULL\n");
		else printf("Position:a[%d]",r); 
		break;
		}
		case 3:
		{
			printarr(a,n); break;
		}
		case 4:
		{
			int max, min;
			printf("Enter [min; max]: "); scanf("%d %d",&min,&max);
			showrange(a,max,min,n); break;
		}
		case 5:
		{
			int i,a5[30];
			for(i=0;i<n;i++) a5[i]=a[i];
			ascSelectionsort(a5,n); printarr(a5,n); 
			break;
		}
	}	
	 } while(choice>0 && choice<6);
}

void showmenu()
{
	printf("\n1. Add value");
	printf("\n2. Search X");
	printf("\n3. Print array");
	printf("\n4. Print range from min to max");
	printf("\n5. Print array in ascending order");
}

void showrange(int *a, int max, int min, int n)
{
	int l=linearsearch(a,n,min), r=linearsearch(a,n,max),i;
	for(i=l;i<=r;i++)
	{
		printf("%d ",a[i]);
	}
}
void addvalue(int *a, int *pn, int value)
{
	a[*pn]=value;
	(*pn)++;
}

int linearsearch(int *a, int n, int value)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
	if (a[i]==value)
	return i;
	}
	return -1;
}
void inputarr(int *a, int n)
{
	int i; 
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i); scanf("%d",(a+i));
	}
}
void printarr(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}

void ascSelectionsort(int a[], int n)
{
	int i,j,minIndex;
	for(i=0;i<n;i++)
	{ 
	minIndex=i;
	 for(j=i+1;j<n;j++) 
	  if (a[minIndex]>a[j]) minIndex=j;
	  
        if(minIndex>i)
		{
		int t=a[minIndex];
		a[minIndex]=a[i];
		a[i]=t;
		}
		
	}	  
}
