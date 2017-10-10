#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i=1,n,sum=0;
	cout << "Enter a number: \n";
	cin >> n;
	cout << "\n";


	while(i<n)
	{
		if (n%i==0)
			sum = sum+i;
			i++;
	}
	if (sum==n)
	{
	cout << i << " is a perfect number" << endl;
	}
	else
	{
	cout<< i << " is not a perfect number" << endl;
	}
	return 0;
}
