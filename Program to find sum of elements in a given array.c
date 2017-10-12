// Program to find sum of elements in a given array

#include <stdio.h>

int sum(int arrayParam[], int sizeParam)
{
	int sum = 0;

	for (int i = 0; i < sizeParam; i++)
	{
		sum = sum + arrayParam[i];
		return sum;
	}
}

int main(int argc, char const *argv[])
{

	int array_var [] = { 15, 10, 20};

	int size = sizeof(array_var) / sizeof(array_var[0]);

	printf("The sum of the elements of the array\n", sum(array_var,size));

	return 0;
}