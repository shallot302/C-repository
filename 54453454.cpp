#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[10001],b[10001];
	for(int i = 0;i<n*m;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n*m;i++){
		cin>>b[i];
		if(a[i] == b[i]){
			cnt++;
		}
	}
	
	return 0;
}