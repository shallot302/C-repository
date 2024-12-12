#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
	int i, j, temp;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
void add(char s1[], char s2[])
{
	int i = 0, temp, c = 0;
	char s[81];
	if (strlen(s1) < strlen(s2)) {
		strcpy(s, s1);
		strcpy(s1, s2);
		strcpy(s2, s);
	}
	reverse(s1); reverse(s2);
	while (s2[i] != '\0') {
		temp = s1[i] - '0' + s2[i] - '0' + c;
		s1[i] = temp % 10 + '0';
		c = temp / 10;
		i++;
	}
	while (s1[i] != '\0' && c) {
		temp = s1[i] - '0' + c;
		s1[i] = temp % 10 + '0';
		c = temp / 10;
		i++;
	}
	if (c) {
		s1[i++] = c + '0';
		s1[i] = '\0';
	}
	reverse(s1);
}
int main()
{
	char str1[81], str2[81];int cnt = 0;
	scanf("%s %s", str1, str2);
	add(str1, str2);
	int q = 0;
	while(str1[q] == '0'&&q<strlen(str1) - 1){
		q++;
	}
	for(;q<strlen(str1);q++){
	
	printf("%c", str1[q]);
	}
	return 0;
}