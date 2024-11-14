#include<stdio.h>
int main()
{
	int a[101];
	int q, n, m, temp;
	scanf("%d%d%d", &n, &m, &q);
	temp = q;
	for (int i = 1; i <= n; i++) a[i] = i;
	for (; n > 1; n--)
	{
		temp = temp + (m - 1);
		while (temp > n)
			temp = temp - n;
		for (int i = temp; i < n; i++)
			a[i] = a[i + 1];
	}
	printf("%d", a[1]);
	return 0;
}

