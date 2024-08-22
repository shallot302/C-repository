#include <stdio.h>
#include <string.h>
#include <limits.h>
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
//int main() {
//	int arr[10] = { 1,2,3,5,6,88,99,100,2000,150 };
//	for (int i = 9; i >= 0; i--) {
//		for (int j = 1; j <= i; j++) {
//			if (arr[j] < arr[j - 1]) {
//				int t = arr[i];
//				arr[j] = arr[j - 1];
//				arr[i - 1] = t;
//			}
//		}
//
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}	
//	return 0;
//}