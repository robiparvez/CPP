// Program to count number of spaces and digits in a string

#include <iostream>
using namespace std;

int main()
{
	string inputString;

	int spaceCounter = 0;

	cout << "Enter ur desired string: ";
	cin.ignore();
	getline(cin, inputString);

	for (int i = 0; inputString[i] != '\0'; ++i)
	{
		if (inputString[i] == ' ')
		{
			spaceCounter++;
		}
	}
	cout << endl;
	cout << "Number of spaces in the string: " << spaceCounter << endl;
	cout << endl;
	return 0;
}