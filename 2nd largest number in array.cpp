#include <iostream>
using namespace std;

int main()
{
	int n , num[100], largest, second;

	cout << "Enter the number of array elements: ";

	cin >> n;

	cout << endl;


		for (int i = 0; i < n; i++)
		{
			cout << "Enter the element number [" << (i + 1) << "] of the array: ";

			cin >> num[i];
		}

			//compare first and second element and store largest element in "largest" var and other element in "second" var//
			if (num[0] < num[1])
			{
				largest = num[1];
				second = num[0];
			}
			else {
				largest = num[0];
				second = num[1];

			}

		for (int i = 2; i < n; i++) // i=2, as we now check from 3rd element
		{
			if (num[i] > largest)//if current element is greater than largest, place largest element to second var and current element to largest var//
			{
				second = largest;
				largest = num[i];
			}
			else if (num[i] > second && num[i] != largest) // if current element is not greater than or equal to largest, place current element to second var
			{
				second = num[i];
			}

		}
		cout << endl;
		cout << "Second Largest Element in the Array is: " << second << endl;
		return 0;
}