//#include <cstdio>
//using namespace std;
//int main(){
//	printf("HelloWorld");
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int main(){
//	int N;
//	cin>>N;
//	int cot = 0;
//	if(N%4 == 0){
//		if(N%100 == 0){
//			if(N%400 == 0){
//				cot = 0;
//			}
//			else cot++;
//			
//		}
//		else cot = 0;
//	}
//	else cot++;
//	if(cot == 1) cout<<'0';
//	if(cot == 0) cout<<'1';
//	return 0;
//}


//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//in p = 1;
//	cin>>day;
//	for(int i = 0;i<day-1;i++){
//		p = p*2;
//		p+=2;
//	}
//	cout<<p;
//	t main(){
//	int day;
//	intreturn 0;
//}


//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//int main(){
//	int t,a,b,c;
//	cin>>t;
//	for(int i = 0;i<t;i++){
//		cin>>a>>b>>c;
//		if(a+b == c){
//			cout<<'+'<<endl;
//		}
//		else if(a-b == c){
//			cout<<'-'<<endl;
//		}
//	}
//	return 0;
//}

#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n,a[1001];
	scanf("%d",&n);
	int i,j;
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int con = n;
	for(i = 1,j = 0;i<n,j<n;i++,j++){
			while(j<i){
				if(a[j] - a[i] == 0){
					con--;
				}
			}
	}
	cout<<con;
	
	return 0;
	
}