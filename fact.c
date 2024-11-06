#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d,",n);
	
	int a[15];
	int temp = n;
	int cnt = 0;
		for (int i = 0; temp != 0; i++) {
			a[i] = temp % 10;
			temp = temp / 10;
			cnt++;
		}
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		int temp2 = 1;
		for (int j = 1; j <= a[i]; j++) {
			temp2 = temp2 * j;
		}
		sum = sum + temp2;
	}
	for(int i = cnt-1;i>=0;i--){
		printf("%d!",a[i]);
		if(i == 0){
			printf("=");
			printf("%d\n",sum);
		}
		else printf("+");
	}
	
	if (sum == n) {
		printf("Yes");
	}
	else printf("No");


	return 0;
}