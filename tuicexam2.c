#include <stdio.h>
#include <math.h>
int a[100];
int main()
{
	int k,u,m,n;
	scanf("%d", &k);
	for (int i = 0; i < k/2; i++) {
		scanf("%d", &m);
		scanf("%d", &n);
		a[n] = a[n]+m;
	}
	scanf("%d", &u);
	for(int j = 0;j<u/2;j++)
	{
		scanf("%d", &m);
		scanf("%d", &n);
		a[n] = a[n]+m;
	}
	for(int i = 100;i>=0;i--){
		if(a[i] != 0){
			printf("%d %d ",a[i],i);
		}
	}

	return 0;
}