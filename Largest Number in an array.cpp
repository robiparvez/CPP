#include <iostream>
using namespace std;

int main()
{

	int n, largestNumber;

	int num[50];

	cout << "Enter the number of elements : ";

	cin >> n;//enter total elements
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter the number ["<<(i + 1) << "] element : " ;

		cin >> num[i];//enter input of each element of the array
	}

	largestNumber = num[0]; //storing on first index of the array

	for (int i = 1; i < n; i++)
	{
		if (largestNumber< num[i])
		{
			largestNumber = num[i];
		}
	}

	cout << endl;
	cout << "The largest element in the arrray is : " << largestNumber;
	cout << endl;
	return 0;
}