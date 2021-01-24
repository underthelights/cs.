#include <stdio.h>
int main(){
	float a=0;
	printf ("Input: ");
	scanf("%f",&a);
	
	printf("Use \">\": %d\n", (int) (a+0.5) > a);
	printf("Use \">=\": %d\n", (int) (a+0.5) >= a );
	printf("Use \"==\": %d\n", (int) a+1 == (int)(a+0.5));
	printf("Use \"!=\": %d\n",  (int)a != (int)(a+0.5));

	return 0;
}

