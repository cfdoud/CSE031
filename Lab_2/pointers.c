#include <stdio.h>
int main(){
    int x =0, y=0, *px, *py;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("x = %d, and y = %d, arr[0] = %d \n", x, y, arr[0]);
    printf("x-address = %p, y-address = %p \n", &x, &y);
    px = &x;
    py = &y;
    printf("px-address = %p, py-address = %p, x-value = %d, y-value = %d \n", px, py, *px, *py);
    int *ptr = arr;
    for(int i =0; i < 10;i++){
        printf("%d \n", *ptr);
        //*(arr + i);
        ptr++;
    }
    printf("arr = %p, arr[o] = %p \n", arr, &arr[0]);
    // *(arr + i);
    return 0;
    }
