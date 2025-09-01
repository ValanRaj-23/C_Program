#include <stdio.h>
int main()
{
	int digit = 10;
	int *address_of_digit = &digit;

	printf(" address of digit %d \n ", address_of_digit);
	printf(" Value in digit %d \n", *address_of_digit);
	
	return 0;

			}





// address of digit 1475183740 
// Value in digit 10 
