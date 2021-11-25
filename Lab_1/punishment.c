#include <stdio.h>
int checker(int x, int y){
switch(y){
	case 0:
		printf("You entered an invalid value for the number of repetitions! \n");	
		printf("Enter the number of repetitions for the punishment phrase:\n");
		scanf("%d", &x);
		return x;
		break;
	case 1:
		printf("You entered an invalid value for the typo placement! \n");
		printf("Enter the repetition count when you wish to introduce a typo:\n");
                scanf("%d", &x);
                return x;
                break;
	}
return 0;
}

int main()      {
int times, typo;
int counter = 0;
printf("Enter the number of repetitions for the punishment phrase:\n");
scanf("%d", &times);
while(times <= 0){
times = checker(times, counter);
}
printf("Enter the repetition count when you wish to introduce a typo:\n");
scanf("%d", &typo);
while(typo <= 0){
counter = 1;
typo = checker(typo, counter);
}
if(counter %2 != 0){
for(int i=0;i<times;i++)
{
if(counter != typo)	{
	printf("C programming language is the best! \n");
	}
else{
	printf("C programming language is the bezt! \n");	
	}
counter++;
}
}
else{
printf("Typo amount %d and counter amount %d \n", typo, counter);
typo--;
for(int i=0;i<times;i++)
{
if(counter != typo)     {
        printf("C programming language is the best! \n");
        }
else{
        printf("C programming language is the bezt! \n");
        }
counter++;
}

}
return 0;
}









