#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int x, int y)   {
   int z = x + y;
    return z;
}

int main()  {
    int m =10;
    int n = 5;
    printf("%d ", sum(m,n));
    return 0;
}