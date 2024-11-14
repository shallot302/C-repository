#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main() {
	int m[11], n[11];
	int a[11][11];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int temp = -20000000, min = 20000000;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (temp < a[i][j])
			{
				temp = a[i][j];
			}

			if (j == 4) {
				m[i] = temp;
				temp = -200000000;
			}
		}
	}
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			if (min > a[i][j])
			{
				min = a[i][j];
			}
			if (i == 4) {
				n[j] = min;
				min = 200000000;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (m[i] == n[j]) {
				printf("%d %d %d", i+1,j+1,m[i]);
				cnt++;
			}
		}
	}
	if(cnt == 0)
	{
		printf("not found");
	}




	return 0;
}