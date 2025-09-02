#include <stdio.h>
int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5};
	int *ptr  = &arr[0];
	
	printf("Value in ptr address %d\n", *ptr);
	printf("addr of array element %p\n", ptr);

	
	printf("Value in ptr address %d\n", *(ptr+2));
	printf("addr of array element %p\n", ptr+2);

}


/*
Value in ptr address 0
addr of array element 0x7ffcd168a800
Value in ptr address 2
addr of array element 0x7ffcd168a808
*/
