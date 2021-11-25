#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void printArr(int *a, int size, char *name){
    printf("%s Array contents: ", name);
    for(int i = 0; i < size; i++){
        printf(" %d", *(a + i));
    }
    printf("\n");
	//Your code here
}

int* arrCopy(int *a, int size){
    int *newArray = (int*)malloc(size* sizeof(int));
    for(int i = 0; i < size; i++){
        *(newArray + i) = *(a + i);
    }
    return newArray;
	//Your code here
}

int main(){
    int n;
    int *arr;
    int *arr_copy;
    int i;
    printf("Enter the size of array you wish to create: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter array element #%d: ",i+1);
        scanf("%d", (arr + i));

    }
     arr = (int*)malloc(n*sizeof(int));
    //Dynamically create an int array of n items
    //Your code here

    //Ask user to input content of array
	//Your code here
	
/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array
    arr_copy = arrCopy(arr, n);

	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}