#include <stdio.h>
float aver(int a, int b, int c, int d) {
	return (float)(a+b+c+d)/4;
}

float dev(int x, float av) {
	return (float)x-av;
}


int main() {
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter the first number : ");
	scanf("%d", &a);
	printf("Enter the second number : ");
	scanf("%d", &b);
	printf("Enter the third number : ");
	scanf("%d", &c);
	printf("Enter the fourth number : ");
	scanf("%d", &d);
	
	float av = aver(a,b,c,d);
	printf("******* average is  %6.2f *******\n", av);

	printf("First  number : %10d  -- Deviation: %10.2f\n", a, dev(a, av));
    printf("Second number : %10d  -- Deviation: %10.2f\n", b, dev(b, av));
    printf("Third  number : %10d  -- Deviation: %10.2f\n", c, dev(c, av));
    printf("Fourth number : %10d  -- Deviation: %10.2f\n", d, dev(d, av));

	return 0;
}
