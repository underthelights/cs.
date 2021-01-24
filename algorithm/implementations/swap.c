#include <stdio.h>
void swap (int *x, int *y);

int main(void){
	int x=0, y=0;
	printf("Input two Number\n");
	printf("        x : ");
	scanf("%d", &x);
	
	printf("        y : ");
	scanf("%d", &y);
	
    printf("------------------------------------\n");
	printf("Before : x [%d] y [%d]\n", x, y);
	swap (&x, &y);
	
    printf("------------------------------------\n");
	printf("After : x [%d] y [%d]\n", x, y);
	return 0;
}

void swap (int *x, int *y){
	int c=0;
	c=*x;
	
	*x = *y;
	*y = c;
	
	return;
}
