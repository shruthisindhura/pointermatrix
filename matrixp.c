#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n,i,j,sum=0;
	printf("Enter no. of rows and columns: ");
	scanf("%d%d", &m, &n);
	int **a;
	//Allocate memory to matrix
	a = (int **) malloc(m * sizeof(int *));
	for(i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
	}
	//Read elements into matrix
	printf("Enter matrix elements: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//Print elements in the matrix
	printf("Matrix elements are: \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
	     if(i==j){
	     	sum=sum+a[i][j];
		 }
		}
		
	}
	printf("\n %d",sum);
	return 0;
}
