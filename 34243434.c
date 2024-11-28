#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++)//遍历！！！
	{
		int a = 0;
		int flag = 0;
		int max = 0;
		int count = 0;
		for (int j = 0; j < m; j++)  //找一行的最大值
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				a = j;
			}
		}

		for (int k = 0; k < n; k++) //确定是不是一列的最大值
		{
			if (max <= arr[k][a])
			{
				flag = 0;
				break;
			}

			else 
			{
				flag = 1; 
			}
		}
		if (flag)
		{
			printf("%d %d %d\n", arr[i][a], i + 1, a + 1);
		}

	}

	return 0; 

}