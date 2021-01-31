#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 //0~99까지의 합 : 4950

float sum(float[], int);
float input[MAX_SIZE], answer;

int i = 0;
int main() {
    for (i = 0; i < MAX_SIZE; i++) input[i] = i;
    printf("the answer is %.2f", answer = sum(input, MAX_SIZE));
    return 0;
}

float sum(float list[], int n) {
    float summation = 0;
    for (int i = 0; i < n; i++)
        summation += list[i];
    return summation;
}
