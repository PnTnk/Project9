#include<stdio.h>

int main() {
	int n;
	printf("Enter number :");
	scanf_s("%d", &n);
	int x = 1;
	while (x <= n) {
		int a = 1;
		if (x == 1 || x == n) {
			while (a <= n) {
				printf("*");
				a += 1;
			}
		}
		else {
			while (a <= n) {
				if (a == 1 || a == n) {
					printf("*");
				}
				else {
					printf(" ");
				}
				a += 1;
			}
		}
		x += 1;
		printf("\n");
	}
	return 0;
}