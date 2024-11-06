//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n;
//	int a[101];
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//		
//	}
//	cin>>m;int cnt = 0;
//	for(int i = 0;i<n;i++){
//		if(a[i] == m){
//			cnt++;
//		}
//	}
//	cout<<cnt;
//	return 0;
//}


//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	double b[11] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
//	double a[11];
//	for(int i = 0;i<10;i++){
//		cin>>a[i];
//	}
//	double sum = 0.0;
//	for(int j = 0;j<10;j++){
//		double temp = a[j]*b[j];
//		sum+=temp;
//	}
//	printf("%.1lf",sum);
//	return 0;
//}




//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	int n;cin>>n;
//	int a[101],b[101];
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i = n-1;i>=0;i--){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}


//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	int n;cin>>n;
//	int a[101];
//	float _61cnt = 0,_18cnt = 0,_35cnt = 0,_60cnt = 0;
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//		if(a[i]>=61){
//			_61cnt++;
//		}
//		if(a[i]>=0&&a[i]<=18){
//			_18cnt++;
//		}
//		if(a[i]>=19&&a[i]<=35){
//			_35cnt++;
//		}
//		if(a[i]>=36&&a[i]<=60){
//			_60cnt++;
//		}
//	}
//	float sum = _61cnt+_18cnt+_35cnt+_60cnt;
//	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n",_18cnt/sum*100,_35cnt/sum*100,_60cnt/sum*100,_61cnt/sum*100);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main(){
//	int n,a[1001],b[1001];
//	cin>>n;
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i = 0;i<n;i++){
//		cin>>b[i];
//	}
//	int usm =  0;
//	for(int i = 0;i<n;i++){
//		int temp = a[i]*b[i];
//		usm+=temp;
//	}
//	cout<<usm;
//	return 0;
//}


//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i = 1;i*i<=n;i++){
//		printf("%d ",i*i);
//	}
//	return 0;
//}