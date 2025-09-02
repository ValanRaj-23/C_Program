#include <stdio.h>
int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5};
	int *ptr  = &arr[0];
	
	printf("Value in ptr address %d", *ptr);
	printf("addr of array element", ptr);

	
	printf("Value in ptr address %d", *(ptr+2));
	printf("addr of array element", ptr+2);

}

