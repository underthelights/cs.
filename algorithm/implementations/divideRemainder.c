#include <stdio.h>

void divideRemainder (int *a, int *b);

int main(void){
	int a=0, b=0;
	printf("Input two Number : ");
	scanf("%d %d", &a, &b);

    printf("------------------------------------\n");	
	divideRemainder(&a,&b);
	printf("OUTPUT : divide [%d], remainder [%d]\n", a, b);
}

void divideRemainder (int *a, int *b){
	*a = *a / *b;
	*b = *a % *b;
}

