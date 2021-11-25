
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

int** matMult(int **a, int **b, int size) {
	// (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
	int **matrix = (int**)malloc(size * sizeof(int*));
	for(int i = 0; i < size; i++){
		*(matrix + i) = (int*)malloc(size * sizeof(int));
		for(int j = 0; j < size; j++){
			*(*(matrix + i)+ j) = 0;
			for(int k = 0; k< size; k++){
				*(*(matrix + i)+ j) = *(*(matrix + i)+ j) + *(*(a + i)+ k) * (*(*(b + k)+ j));
			}
		}
	}
	
	return matrix;
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
				printf("%d,\t", *(*(arr + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}


int main() {
	int n = 0;
	int **matA, **matB, **matC;
	// (1) Define 2 (n x n) arrays (matrices). 
	printf("Please enter the size of the array: \n");
	scanf("%d", &n);
	matA = (int**)malloc(n * sizeof(int*));
	matB = (int**)malloc(n * sizeof(int*));
	printf("Input the values for matA: \n");
	for(int i = 0; i < n; i++){
		*(matA + i) = (int*)malloc(n * sizeof(int*));
		printf("--------------------- \n");
		for(int j= 0; j<n; j++){
			scanf("%d", *(matA + i)+j);
			//*(*(arr + i)+j) = 0;
		}
	}
	
	printf("--------------------- \n");
	printf("Input the values for matB: \n");
	for(int i = 0; i < n; i++){
		*(matB + i) = (int*)malloc(n * sizeof(int*));
		printf("--------------------- \n");
		for(int j= 0; j<n; j++){
			scanf("%d", *(matB + i)+j);
			//*(*(arr + i)+j) = 0;
		}
	}
	printf("-------------------- \n");
	// (3) Call printArray to print out the 2 arrays here.
	printArray(matA, n);
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.

	printf("we got here \n");
	printArray(matC, n);
	

    return 0;
}