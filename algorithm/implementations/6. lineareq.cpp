#include <stdio.h>
float xxx(int a, int b, int c, int d) {
	return (float)(b - d) /(float) (a - c);
}

float yyy(int a, int b, int c, int d) {
    return (float)(a * d - b * c) / (float)(c - a);
}

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);
	
	printf("result:\n");
	printf("x is %f\n",xxx(a, b, c, d));
	printf("y is %f\n",yyy(a, b, c, d));
		
	return 0;
}
