#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,i,j;
	cin>>n>>i>>j;
	for(int q = 1;q<=n;q++){
		printf("(%d,%d) ",i,q);
	}
	printf("\n");
	for(int p = 1;p<=n;p++){
		printf("(%d,%d) ",p,j);
	}
	printf("\n");
	for(int z = 1;z<=n;z++){
		for(int f = 1;f<=n;f++){
			if(z-f == i-j){
				printf("(%d,%d) ",z,f);
			}
		}
	}
	printf("\n");
	for(int z = n;z>=1;z--){
		for(int f = 1;f<=n;f++){
			if(z+f == i+j){
				printf("(%d,%d) ",z,f);
			}
		}
	}
	
	return 0;
}