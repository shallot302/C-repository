#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n,a[101],temp = 1,cnt = 1;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(i>=1){
			if(a[i] == a[i-1]) cnt++;
			if(a[i] != a[i-1]){
				if(temp < cnt){
					temp = cnt;
					cnt = 1;
				} 
				
			}
		}
	}
	printf("%d",temp);
	return 0;
}