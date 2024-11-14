#include <stdio.h>
#include <string.h>
int main(){
	char str[200];
	scanf("%s",str);
	int i = 0,j = strlen(str) - 1;int cnt = 0;

	while(j-i>1){
		if(str[i] == str[j]){
			i++;j--;
		}
		if(str[i]!=str[j]) {
			printf("No");
			i = 0,j = strlen(str) - 1;
			cnt++;
			break;
		}
		
	}
	if(cnt == 0) printf("Yes");
	
	return 0;
}