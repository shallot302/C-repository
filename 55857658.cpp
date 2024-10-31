//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int main(){
//	int n,cnt = 1;cin>>n;
//	for(int i = n;i>0;i--){
//		for(int j = 0;j<i;j++){
//			if(cnt<10){
//				printf("0%d",cnt);
//				cnt++;
//			}
//			else {
//				cout<<cnt;
//				cnt++;
//			}
//		}
//		cout<<endl;
//		
//	}
//	return 0;
//}

//#include <cstdio>
//using namespace std;
//#define N 10
//int main(){
//	int i,j,a[N][N];
//	for(i = 0;i<N;i++){
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for(int i = 2;i<N;i++){
//		for(int j = 1;j<=i-1;j++){
//			a[i][j] = a[i-1][j-1]+a[i-1][j];
//			
//		}
//	}
//	for(int i  =0;i<N;i++){
//		for(int j = 0;j<=i;j++){
//			printf("%6d",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	int a[15][15],i,j,k,p,n;
//	p = 1;
//	while(p == 1){
//		printf("enter n(n=1--15):");
//		cin>>n;
//		if((n!=0)&&(n<=15)&&(n%2!=0)){
//			p = 0;
//		}
//		
//	}
//	for(i = 1;i<=n;i++){
//		for(j = 1;j<=n;j++){
//			a[i][j]  = 0;
//		}
//	}
//	j = n/2+1;
//	a[1][j] = 1;
//	for(k = 2;k<=n*n;k++){
//		i = i-1;
//		j = j+1;
//		if((i<1)&&(j>n)){
//			i = i+2;
//			j = j-1;
//		}
//		else{
//			if(i<1) i = n;
//			if(j>n) j = 1;
//		}
//		if(a[i][j] == 0){
//			a[i][j] = k;
//		}
//		else{
//			i = i+2;
//			j = j-1;
//			a[i][j] = k;
//		}
//	}
//	for(int i=1;i<=n;i++){
//		for(int j = 1;j<=n;j++){
//			printf("%5d",a[i][j]);
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;cin>>n;
//	string
//	return 0;
//}



//#include <cstdio>
//#include <cmath>
//#include <iostream>
//using namespace std;
//int main(){
//	int t,a[10001],b[10001];
//	cin>>t;
//	for(int i = 0;i<t;i++){
//		cin>>a[i]>>b[i];
//		cout<<max(a[i],b[i])<<endl;
//	}
//}
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int X,Y;cin>>X>>Y;
	for(int i = min(X,Y);i<max(X,Y);i++){
		
	}
}