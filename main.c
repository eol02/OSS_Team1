#include <stdio.h>

#define NUM 2

void main() {
	int num[NUM] = { 0 };

	printf("Enter %d >> ", NUM);
	for (int i = 0; i < NUM; i++) {
		scanf_s("%d", &num[i]);
	}
}
