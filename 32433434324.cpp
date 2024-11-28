//#include <cstdio>
//#include <cmath>
//int main(){
//	int cnt =  0;
//	for(int i = 2;i<=sqrt(2024);i++){
//		if(2024%i == 0){
//			for(int j = 2;j<i;j++){
//				if(i%j==0){
//					continue;
//				}
//			}
//			cnt++;
//		}
//	}
//	printf("%d",cnt);
//	return 0;
//}

//#include <cstdio>
//#include <cmath>
//int main(){
//	int cnt = 2,temp = sqrt(2024);
//	for(int i = 0;sqrt(temp) != 1;i++){
//		temp = sqrt(temp);
//		cnt++;
//	}
//	printf("%d",cnt);
//}

#include <cstdio>
#include <cmath>
int main() {
	int c = 2; int m = 1, day = 1, cnt = 0, year = 1901;
	for (int i = 1; i <= 124 * 365; i++) {
		if (c == 8) {
			c = 1;
		}
		if (m == 13) {
			year++;
			m = 1;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (day == 31) {
				m++;
				day = 1;
			}
		}
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (day == 30) {
				m++;
				day = 1;
			}
		}
		if (m == 2) {
			if (year % 4 == 0) {
				if (year % 100 == 0) {
					if (year % 400 == 0) {
						if (day == 29) {
							m++;
							day = 1;
						}
					}
					else {
						if (day == 28) {
							m++;
							day = 1;
						}
					}
				}
				else {
					if (day == 29) {
						m++;
						day = 1;
					}
				}
			}
			else {
				if (day == 28) {
					m++;
					day = 1;
				}
			}
		}
		if (day == 1 || day == 11 || day == 21 || day == 31) {
			if (c == 1) {
				cnt++;
			}
		}
		day++;
		c++;



	}
	printf("%d", cnt);
}


//#include <cstdio>
//int main(){
//	int n;scanf("%d",&n);
//	printf("%d",n/15*2);
//	return 0;
//}

//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	long long n;int a[11];
//	cin>>n;
//	int temp = n,cnt = 0; 
//	for(int i = 0;temp/10!=0;i++){
//		a[i] = temp%10;
//		temp = temp/10;
//		cnt++;
//	}
//	a[cnt-1] = temp;
//	sort(a,a+cnt-1);
//	printf("%d",a[cnt-1]);
//	
//}


//#include <cstdio>
//int main(){
//	long long a,b;
//	scanf("%d%d",&a,&b);
//	printf("%d",a+b);
//}

//#include <cstdio>
//int main(){
//	
//	return 0;
//}


//#include <cstdio>
//int main(){
//	
//	return 0;
//}