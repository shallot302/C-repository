//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int n;cin>>n;int a[100001];
//	for(int i = 0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,a+n);
//	int Fmax = a[n-1];
//	int cnt = 0,cnt1 = 0,cnt2 = 0;
//	for(int i = 0;i<n;i++){
//		if(cnt == a[i]){
//			cnt1++;
//		}
//		if(cnt != a[i]){
//			printf("%d\n",cnt1);
//			cnt2++;
//			cnt1 = 0;
//			cnt++;
//			if(cnt == a[i]){
//				cnt1++;
//			}
//			while(cnt != a[i]){
//				printf("0\n");
//				cnt2++;
//				cnt++;
//			}
//		}
//	}
//	if(cnt2 != Fmax+1){
//		printf("%d\n",cnt1);
//	}
//	
//	
//	return 0;
//}

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int x[110000],u;
	int n;cin>>n;int max = 0;
	for(int i = 0;i<n;i++){
		cin>>u;
		x[u]++;
		if(max<u){
			max = u;
		}
	}
	sort(x,x+n);
	printf("%d",x[max-1]);
	return 0;
}


