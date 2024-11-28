#include<stdio.h>
int main() {
	char a[100], b[100], x, d;
	int i = 0, j = 0;
	while ((x = getchar()) != '\n')//输入字符串的格式，顺便记录字符串大小
		a[i++] = x;

	while ((d = getchar()) != '\n')
		b[j++] = d;


	char len[100], s, max = 0, L, D, H, n, m;
	for (n = 0; n < i; n++) {
		for (m = 0; m < j; m++) {
			D = n;		
			H = m;
			if (a[D] == b[H]) {
				char temp[100] = { 0 };
				s = 0;
				temp[s++] = b[H];
				for (D++, H++; D < i && H < j; D++, H++)
					if (a[D] == b[H])
						temp[s++] = b[H];
					else
						break;
				if (s > max) {
					max = s;
					for (L = 0; L < s; L++)
						len[L] = temp[L];
				}

			}
		}
	}
	if (max == 0)
		printf("No Answer");
	else {
		for (L = 0; L < max; L++)
			printf("%c", len[L]);
	}
	return 0;
}