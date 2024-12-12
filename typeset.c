#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void p(char c[][100], int num, FILE* g, int h)
{
	int i = 0, cnt = 0, j, k = 0;
	while (c[h][k] == ' ' || c[h][k] == '\t')
		k++;
	for (i = k; i < 100; i++)
	{
		if (c[h][i] == '\0')
			break;
		if (c[h][i] == ':')
		{
			for (j = cnt + 1; j < num; j++)
				fprintf(g, " ");
			fprintf(g, "%c", c[h][i]);
			c[h][i] = ' ';
			i--;
			continue;
		}
		while ((c[h][i] == '\t' || c[h][i] == ' ') && (c[h][i + 1] == '\t' || c[h][i + 1] == ' '))
			i++;
		if (c[h][i] == '\t')
		{
			fprintf(g, " ");
			cnt++;
			continue;
		}
		fprintf(g, "%c", c[h][i]);
		cnt++;
	}
}
int main()
{
	FILE* f, * g;
	f = fopen("listin.txt", "r");
	g = fopen("listout.txt", "w");
	int i = 1, num, x;
	char c[100][100];
	while (!feof(f))
	{
		fgets(c[i], 100, f);
		i++;
	}
	scanf("%d", &num); 
	for (x = 1; x < i; x++)
		p(c, num, g, x);
	fclose(f);
	fclose(g);
	return 0;
}