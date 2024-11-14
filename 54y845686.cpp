//#include <cstdio>
//#include <cmath>
//#include <iostream>
//using namespace std;
//int main(){
//	int a[10001];
//	int n;cin>>n;
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//	}
//	int c;cin>>c;
//	int cnt = 0;
//	for(int i = 0;i<n;i++){
//		if(a[i] == c){
//			cout<<i;
//			cnt++;
//			break;
//		}
//	}
//	if(cnt == 0){
//		cout<<-1;
//	}
//	return 0;
//}


//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	long long n;cin>>n;
//	long long a[1000];long long max = -1000001,sum = 0;
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//		if(a[i]>max){
//			max = a[i];
//		}
//	}
//	for(int i = 0;i<n;i++){
//		if(a[i] != max){
//		sum+=a[i];
//		}
//	}
//	cout<<sum;
//	
//	return 0;
//}



#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;cin>>n;
	double a[301];double max = 0.0,min = 1000000000000000000;int cnt1,cnt2;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max = a[i];
			cnt1 = i;
		}
		if(a[i]<min){
			min = a[i];
			cnt2 = i;
		}
	}
	a[cnt1] = 0.0;a[cnt2] = 0.0;
	double sum = 0.0,avg = 0.0;max = 0.0;
	for(int i = 0;i<n;i++){
		sum+=a[i];
	}
	avg = sum/(n-2);
	for(int i = 0;i<n;i++){
		if(max<fabs(avg-a[i])){
			max = fabs(avg-a[i]);
		}
	}
	printf("%d %d",avg,max);
	
	return 0;
}