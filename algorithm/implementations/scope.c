#include <stdio.h>

int a, b;

void fourmath (int *c, int *d);
void printResult (int *c, int *d);

int main(){
	int a=0, b=0;
	
	printf ("input two number : ");
	scanf ("%d %d", &a, &b);
	
	fourmath(&a, &b);
	printResult(&a, &b);
	
	return 0;
}

void fourmath (int *c, int *d) {    
	a = *c + *d;
	b = *c - *d;
	*c = *c * *d;
    *d = *c / *d / *d;
    
	return;
}


void printResult(int *c, int *d) {
    printf("Result : ");
    printf("a+b= %d, ",  a);
    printf("a-b= %d, ",  b);
    printf("a*b= %d, ",  *c);
    printf("a/b= %d",  *d);
    
    return;
}

