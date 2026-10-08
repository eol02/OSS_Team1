#include <stdio.h>

#define NUM 2

void Arithmetic_Operations(int, int);		//#1
void PrimeNumber(int, int);		//#2
void GCD(int, int);		//#4

void main() {
	int num[NUM] = { 0 };

	printf("Enter %d >> ", NUM);
	for (int i = 0; i < NUM; i++) {
		scanf_s("%d", &num[i]);
	}
	
    Arithmetic_Operations(num[0], num[1]);
	PrimeNumber(num[0], num[1]);
	GCD(num[0], num[1]);
}
void Arithmetic_Operations(int a, int b) { //#1 두 수를 입력받아 사칙연산 수행

	printf("\n%d + %d = %d, ", a, b, a + b);
	printf("%d - %d = %d, ", a, b, a - b);
	printf("%d * %d = %d, ", a, b, a * b);

	if (b == 0) {
		printf("Error.\n");
	}
	else {
		printf("%d / %d = %.2f\n", a, b, (double)a / b);
	}
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

void GCD(int n1, int n2) {	//#4 두 수의 최대공약수 출력

	int tmp;

	if (n1 == n2) {
		printf("\nGCD: %d", n1);
		return;
	}

	if (n2 == 0) {
		printf("\nGCD: %d", n1);
		return;
	}

	else {
		tmp = n2;
		n2 = n1 % n2;
		n1 = tmp;

		GCD(n1, n2);
	}
}
