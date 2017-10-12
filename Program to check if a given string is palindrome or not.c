// Program to check if a given string is palindrome or not
#include <stdio.h>
#include <string.h>

void isPalindrome(const char str[])
{
	int lowest = 0;//Take the lowest
	int highest = strlen (str) - 1;//highest value of string

	while ( highest > lowest)
	{
		if ( str[lowest++] != str[highest--])// if H and L are not same
		{
			printf("\n");
			printf("%s is not a palindrome\n", str);
			return;
		}
	}
	printf("\n");
	printf("%s is a palindrome\n", str );//if H and L are same
}

//Driver program to check string
int main()
{
	isPalindrome("NiggiN");
	isPalindrome("HannaH");
	isPalindrome("Parvez");
	return 0;
}