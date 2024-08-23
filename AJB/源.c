#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <corecrt_malloc.h>
//—°‘Ò≈≈–Ú
//int main() {
//	int arr[10] = {11111,21111,3113,4115,5116,6117,7811,8119,9111,121};
//	for (int i = 0; i < 10; i++) {
//		int min = INT_MAX;
//		int index = 0;
//		for (int j = i; j < 10; j++) {
//			if (arr[j] < min) {
//				min = arr[j];
//				index = j;
//			}
//		}
//		int t = arr[i];
//		arr[i] = arr[index];
//		arr[index] = t;
//
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//√∞≈›≈≈–Ú
int main() {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (arr[j - 1] > arr[j]) {
				int t = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = t;
			}
		}

	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
