//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int N,M;
//	cin>>N>>M;
//	int cnt = 0;
//	for(int i = 0;i<N;i++){
//		for(int j = 0;j<M;j++){
//			cnt++;
//			if(cnt%M == 0){
//				printf("PUM");
//				continue;
//			}
//			printf("%d ",cnt);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int fibs(int x){
//	if(x == 0) {
//	return 0;
//	}
//	else if(x == 1){
//		return 1;
//	}
//	int f1 = 1,f2 = 0,fn = 0;
//	for(int i = 2;i<=x;i++){
//		fn = f1+f2;
//		f2 = f1;
//		f1 = fn;
//		
//	}
//	return fn;
//	 	
//}
//int main(){
//	int N[100],T;cin>>T;
//	for(int i = 0;i<T;i++){
//		cin>>N[i];
//	}
//	for(int i = 0;i<T;i++){
//		printf("Fib(%d) = %d\n",N[i],fibs(N[i]));
//	}
//	return 0;
//}


#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int main(){
	int n,k;scanf("%d%d",&n,&k);
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int i = 0;int j = n-1;
	int *p = &a[0];int *q = &a[n-1];
	while(*p + *q != k){
		if(*p + *q > k){
			q--;j--;
		}
		else if(*p + *q < k){
			p++;i++;
		}
	}
	printf("%d %d",i,j);
	return 0;
}