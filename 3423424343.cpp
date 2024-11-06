#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;int cnt = 0;
	for(int i = 0;i*a<=c;++i){
		int temp = (c - a*i)/b;
		if(temp>=0&&temp * b == c - a*i){
			cnt++;
		}
		}
	
	cout<<cnt;
	
	return 0;
}