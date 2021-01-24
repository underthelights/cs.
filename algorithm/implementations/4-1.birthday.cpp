#include <stdio.h>
int main(void) {
    int b=0;
    printf("Birthday : ");
    scanf("%d", &b);
	
	int year = b / 10000;
    int month = b % 10000 / 100;
    int date = b % 100;

    printf("Your birthday is %d / %d / %d\n", year, month, date);
	
	int py=0;
    printf("Year : ");
    scanf("%d", &py);

    printf("In %d, your age is %d\n", py, py - year + 1);
	return 0;		
}

