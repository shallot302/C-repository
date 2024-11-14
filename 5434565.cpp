#include <iostream>
using namespace std;

int main(){
	int a[6][6];
	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			cin>>a[i][j];
		}
	}
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<5;i++){
		int term = a[n-1][i];
		a[n-1][i] = a[m-1][i];
		a[m-1][i] = term;
	}
	for(int i = 0;i<5;i++){
		
		for(int j = 0;j<5;j++){
			printf("%d ",a[i][j]);
		}printf("\n");
	}
	return 0;
}