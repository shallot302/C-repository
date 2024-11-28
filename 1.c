//
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char s[100],t[100];
//	int i = 0,j = 0;
//	scanf("%s",s);
//	scanf("%s",t);
//	char r[100];int cnt = 0,temp = 0;
//	char str[100];
//	if(strlen(t)<strlen(s)){
//		strcpy(str,s);
//		strcpy(s,t);
//		strcpy(t,str);
//		
//	}
//	while(i<strlen(s)&&j<strlen(t)){
//		if(s[i] == t[j]){
//			r[cnt] = s[i];i++;j++;cnt++;
//		}
//		if(s[i] != t[j]){
//			if(strlen(t)<strlen(s)){
//				i++;
//			}
//			if(strlen(t)>strlen(s)){
//				j++;
//			}
//			else {
//			i++;
//			j++;
//		}
//				
//	}
//	
//	if(cnt == 0){printf("No Answer");
//	}
//	if(cnt>0){
//		printf("%s",r);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
// 
//char* longest_common_substring(char *str1,char *str2)
//{
//	int str1len = strlen(str1);
//	int str2len = strlen(str2);
//	int i,j,index,max=0,num=0; 
//	int start;
//    
//	
//	for(i = 0; i < str1len; i++) 
//	{
//		for(j = 0; j < str2len; j++)
//		{
//			
//			int start1=i;
//			int start2=j;
//			while((start1 <= str1len-1) && (start2 <= str2len-1) && (str1[start1++] == str2[start2++]))
//				num++;
//			if(num > max)
//			{
//				max=num;
//				start=i; 
//			} 
//			num=0;
//		}
//	}
//	char *str=(char *)malloc(max + 1);
//	strncpy(str,str1 + start,max);
//	str[max] = '\0';
//	printf("最长公共连续子串的长度为：%d\n",max);
//	return str;
//}
// 
//int main()
//{ 
//	char str1[1000],str2[1000];
//	gets(str1);gets(str2);
// 
//	char *str= longest_common_substring(str1,str2);
//	printf("%s\n",str);
//	free(str);  
//	system("pause");
//	return 0;    
//}


//#include<stdio.h>
//int main()
//{
//	char char1[50], char2[50], a[50], b[50];
//	int i, j, s = 0, k = 0;
//	scanf("%s",char1);
//	scanf("%s",char2);
//	for (i = 0; i < 50; i++)
//	{	
//		if (char1[i] != 0)
//		{	
//			for (j = 0; j < 50; j++)
//			{	
//				if (char2[j] == 0)
//					break;
//				else{
//					if (char1[i] == char2[j])
//					{
//						while (char1[i] == char2[j])
//						{
//							a[k] = char1[i], k++;
//							i++, j++;
//						}
//						if (k > s)
//						{
//							int t;
//							for (t = 0; t < k; t++)
//							{
//								b[t] = a[t];
//								s = k;
//							}
//						}
//						k=0;
//					}
//				}
//			}
//		}
//	}
//	if(s==0)
//		printf("No Answer");
//	else
//		for (i = 0; i < s; i++)
//			printf("%c", b[i]);
//	return 0;
//}



#include<stdio.h>
int main() {
	char a[100], b[100], x, d;
	int i = 0, j = 0;
	while ((x = getchar()) != '\n')
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
