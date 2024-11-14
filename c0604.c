#include <stdio.h>
#include <string.h>
int main(){
	char str[51];
	scanf("%s",str);
	int i = 0,j = strlen(str) - 1;int cnt = 0;
	while(i!=j){
		if(str[i] == str[j]){
			i++;j--;
		}
		else {
			printf("No");
			cnt++;
			break;
		}
		
	}
	if(cnt == 0) printf("Yes");
	
	return 0;
}