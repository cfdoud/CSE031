
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

 int main() {
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *)malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **)malloc(1 * sizeof(int *));
	*handle = ptr;
	printf("Address of num: %p, Address of ptr: %p, Address of handle: %p\n", &num, &ptr, &handle);
	// Insert extra code here

	return 0;
} 

