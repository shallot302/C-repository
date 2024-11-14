#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int heng, shu;
int max(int a, int b) {
	return (a > b) ? a : b;
}
int main() {
	int m[11], n[11];
	int a[11][11];
	scanf("%d%d", &heng, &shu);
	for (int i = 0; i < heng; i++) {
		for (int j = 0; j < shu; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int temp = -20000000;
	for (int i = 0; i < heng; i++) {
		for (int j = 0; j < shu; j++) {
			if (temp < a[i][j])
			{
				temp = a[i][j];
			}
			
			if (j == shu - 1) {
				m[i] = temp;
				temp = -200000000;
			}
		}
	}
	for (int j = 0; j < shu; j++) {
		for (int i = 0; i < heng; i++) {
			if (temp < a[i][j])
			{
				temp = a[i][j];
			}
			if (i == heng - 1) {
				n[j] = temp;
				temp = -200000000;
			}
		}
	}
	for (int i = 0; i < heng; i++) {
		for (int j = 0; j < shu; j++) {
			if (m[i] == n[j]) {
				printf("%d %d %d", m[i], i+1, j+1);
				printf("\n");
			}
		}
	}




	return 0;
}