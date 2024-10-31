#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[101],b[101];
	for(int i = 0;i<100;i++){
		cin>>a[i];
	}
	copy(begin(a),end(a),begin(b));
	sort(a,a+100);
	cout<<a[99]<<endl;
	for(int i = 0;i<100;i++){
		if(b[i] == a[99]){
			cout<<i+1<<endl;
		}
	}
	
	return 0;
}



#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
int main(){
	int a[101],b[101],c[101],d[101];
	
	return 0;
}