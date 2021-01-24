#include <stdio.h>

int x=1;
int fibonacci (int *y);

int main(){
	int x=0;
	
	printf("Fibo(2): %d\n", fibonacci(&x));
	printf("Fibo(3): %d\n", fibonacci(&x));
	printf("Fibo(4): %d\n", fibonacci(&x));
	printf("Fibo(5): %d\n", fibonacci(&x));
	printf("Fibo(6): %d\n", fibonacci(&x));
	printf("Fibo(7): %d\n", fibonacci(&x));
	printf("Fibo(8): %d\n", fibonacci(&x));
	printf("Fibo(9): %d\n", fibonacci(&x));
	
	return 0;
}

int fibonacci (int *y) {
    int a = x;
    x += *y;
    *y = a;
    return x;
}
