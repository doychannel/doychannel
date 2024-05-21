#include <stdlib.h>
#include<stdio.h>

void input(int a[50][50], int row, int col)
{
	
	int i,j;
	for (i=1;i<=row;i++)
		for(j=1;j<=col;j++)
	{
		printf("a[%d][%d]=",i,j); 
		scanf("%d",&a[i][j]);
	}
}
void output(int a[50][50], int row, int col)
{
	int i,j;
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
	}
	
}
int sum(int a[50][50], int row, int col)
{
	int sum=0;
	int i,j;
	for (i=1;i<=row;i++)
		for(j=1;j<=col;j++)
	{
		sum+= a[i][j];
	}
	return sum;
}

int main()
{
	int a[50][50],row,col;
	printf("Enter size of array\n ");
	printf("\nEnter row: "); scanf("%d",&row);
	printf("\nEnter col: "); scanf("%d",&col);
	 input(a,row,col);
	 output(a,row,col);
	 printf("\nSum of elements: %d",sum(a,row,col));
	
}
