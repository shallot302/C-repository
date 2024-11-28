#include<stdio.h>
#include<string.h>
int main()
{
	char a[21], b[21], str[201];
	gets(a); gets(b); gets(str);
	int str1 = strlen(a);
	int str2 = strlen(str);
	int flag = 1;
	for (int i = 0; i < str2; i++)
	{
		if ((str[i] != a[0]) && (str[i] != a[0] - 32) && (str[i] != a[0] + 32))
			printf("%c", str[i]);
		else {
			flag = 1;
			for (int j = 0; j < str1; j++)
			{
				if ((str[i + j] != a[j]) && (str[i + j] != a[j] + 32) && (str[i + j] != a[j] - 32))
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				printf("%s", b);
				i += str1;
				i--;
			}
			else
				printf("%c", str[i]);
		}
	}
	return 0;
}



