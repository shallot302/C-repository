#include <cstdio>
#include <cstring>
void delete_string(char str[],char ch){
 
	for(int i = 0,j = 0;str[i] != '\0';i++){
		if(str[i]!= ch) str[j++] = str[i];
		str[j]  = '\0';
	}
}
int main(){
	
	return 0;
}