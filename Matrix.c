#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum;
	int *p;
	printf("ENTER A 3*3 MATRIX:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	p=&a[0][0];
	printf("\nTHE ENTERED MATRIX IS: \n");
	printf("------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(p+i*3+j));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\nTHE SUM OF DIAGONAL ELEMENTS OF THE MATRIX: %d",sum);
	return 0;
}
