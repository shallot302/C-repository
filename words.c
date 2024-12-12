#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE* f, * g;
	char temp[20];
	char w[100][20];
	int cnt = 0;
	f = fopen("in.txt", "r");
	g = fopen("words.txt", "w");
	while (!feof(f)) fscanf(f, "%s", w[cnt++]);
	rewind(f);
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < strlen(w[i]); j++)
		{
			if ((w[i][j] <= 'z' && w[i][j] >= 'a') || (w[i][j] <= 'Z' && w[i][j] >= 'A') || w[i][j] == ' ')
			{
				if (w[i][j] >= 'A' && w[i][j] <= 'Z')
					w[i][j] += 32;
			}
			else
				w[i][j] = '\0';
		}
	}
	for (int i = 0; i < cnt; i++) {
		if (strcmp(w[i], "which") == 0) {
			strcpy(w[cnt++], "purpose");
			continue;
		}
		else if (strcmp(w[i], "york") == 0) {
			strcpy(w[cnt++], "th");
			continue;
		}
	}
	cnt++;
	for (int i = 0; i < cnt; i++)
	{
		for (int j = i; j < cnt - 1; j++)
		{
			if (strcmp(w[i], w[j]) > 0)
			{
				strcpy(temp, w[i]);
				strcpy(w[i], w[j]);
				strcpy(w[j], temp);
			}
		}
	}
	fprintf(g, "%s\n", w[0]);
	for (int i = 1; i < cnt - 1; i++)
	{
		if (strcmp(w[i], w[i - 1]) != 0)
			fprintf(g, "%s\n", w[i]);
	}
	fclose(f);
	fclose(g);
	return 0;
}