
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	// Insert extra code here
	printf("Head = %d, %f\n", head->iValue, head->fValue);
	printf("Address of head = %p, Address of iValue = %p, Address of fValue = %p, Address of next = %p\n", &head, &head->iValue, &head->fValue, head->next);

	return 0;
}