// Program to multiply two matrices

#include <stdio.h>

int main()
{
	//init matrices and store result in matrix C
	int A[3][3], B[3][3], C[3][3], i, j, k, sum;

	printf("Enter the 9 elements of matrix A: \n");
	for ( i = 0; i <= 2; i++)
		for ( j = 0; j <= 2; j++)
			scanf("%d", &A[i][j]);

	printf("Enter the 9 elements of matrix B: \n");
	for ( i = 0; i <= 2; i++)
		for ( j = 0; j <= 2; j++)
			scanf("%d", &B[i][j]);

	for ( i = 0; i <= 2; i++)
		for ( j = 0; j <= 2; j++)
		{
			sum = 0;
			for ( k = 0; k <= 2; k++)
				sum = sum + A[i][k] * B[k][j];
				C[i][j] = sum;
		}

	for ( i = 0; i <= 2; i++)
	{
		for ( j = 0; j <= 2; j++)

			printf("The Matrix Multiplation Result is: \n");
			printf("%d\t",C[i][j]);
			printf("\n");
	}
	return 0;
}