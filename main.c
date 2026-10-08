#include <stdio.h>

#define NUM 2

void PrimeNumber(int, int);	//#2

void main() {
	int num[NUM] = { 0 };

	printf("Enter %d >> ", NUM);
	for (int i = 0; i < NUM; i++) {
		scanf_s("%d", &num[i]);
	}

	PrimeNumber(num[0], num[1]);
}

void PrimeNumber(int n1, int n2) {	//#2 두 수 중 더 큰 수까지의 소수 나열
	int num, check;

	if (n1 > n2) num = n1;
	else num = n2;

	printf("\nPrime numbers: ");
	for (int i = 2; i <= num; i++) {
		check = 1;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				check = 0;
				break;
			}
		}
		if (check == 1) {
			printf("%d ", i);
		}
	}
}
