#include<stdio.h>
int main()
{
	int n,n1 = 0,n2 = 0,t,a = 0,b = 0,c = 0;
	int sz1[25],sz2[25],sz3[25];
	for (int i = 0;i <= 24;i++)
	{
		scanf("%d", &sz1[i]);
		a++;
		if (sz1[i] == -1)break;
	}
	printf("\n");
	for (int i = 0;i <= 24;i++)
	{
		scanf("%d", &sz2[i]);
		b++;
		if (sz2[i] == -1)break;
	}
	for (int i = 0;i <= a;i++)
	{
		for (int j = 0; j <= b; j++)
		{
			if (sz2[j] == -1)break;
			if (sz1[i] == sz2[j])
			{
				c = c + 1;
				sz3[c - 1] = sz2[j];
			}
		}
	}
	for (int j = 0;j < c;j++)
		for (int i = 1;i < c;i++)
			if (sz3[i] > sz3[j])
			{
				t = sz3[j]; sz3[i] = sz3[j]; sz1[i] = t; break;
			}
	for (int i = 0;i < c;i++)
		printf("%d ", sz3[i]);
}