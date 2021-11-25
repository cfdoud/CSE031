#include <stdio.h>

int main() {
float  even = 0.00,odd = 0.00;
int integer = 1, even_counter, odd_counter;


even_counter = 0;
odd_counter = 0;
while(integer != 0) {
	printf("Please enter an integer: \n");	
        scanf("%d", &integer);
	if(integer == 0){
	break;
	}
	if (integer % 2 == 0) {
        	even += integer;
        	printf("even counter, %d\n", even_counter);
		even_counter++;
         } else	{
        	odd += integer;
        	odd_counter++;
		}
	
}
printf("odd counter,  %d \n", odd_counter);
even = even/even_counter;
odd = odd/odd_counter;
if(even_counter > 0){
printf("Average of even numbers %.2f \n " , even);
}
if(odd_counter>0){
printf("Average of odd numbers %.2f \n "  , odd);
}
if (even_counter == 0 && odd_counter == 0){        
        printf("There is no average. \n");
        }

return 0;
}
