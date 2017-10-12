// Program to find sum of elements in a given array

#include <stdio.h>

int sum(int arrayParam[], int sizeParam)
{
	int sum = 0;

	for (int i = 0; i < sizeParam; i++)
		sum = sum + arrayParam[i];
	return sum;
}

int main()
{
	int array_var[] = { 500,2,2};

	int size = sizeof(array_var) / sizeof(array_var[0]);

	printf("\n");
	printf("The sum of the elements of the array is [%d]\n", sum(array_var, size));

	return 0;
}