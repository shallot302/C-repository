//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int n,total = 0,temp = 0;
//	cin>>n;
//	for(int i = 0;i<=n;++i){
//		temp = i;
//		total+=temp;
//	}
//	printf("%d",total);
//	getchar();
//	getchar();
//	return 0;
//
//}

//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int a,b,n;
//	cin>>a>>b>>n;
//	for(int i =0;i<n;i++){
//		a%=b;a*=10;
//	}
//	a/=b;
//	cout<<a; 
//	return 0;
//}


//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int a,b,ans = 1;
//	cin>>a>>b;
//	a%=7;
//	for(int i = 0;i<b;i++){
//		ans*=a;
//		ans%=7;
//	}
//	if(ans == 1) cout<<"Monday";
//	if(ans == 2) cout<<"Tuesday";
//	if(ans == 3) cout<<"Wednesday";
//	if(ans == 4) cout<<"Thursday";
//	if(ans == 5) cout<<"Friday";
//	if(ans == 6) cout<<"Saturday";
//	if(ans == 0) cout<<"Sunday";
//
//	return 0;
//}

//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int a,b,res =1;
//	cin>>a>>b;
//	for(int i = 0;i<b;i++){
//		res*=a;
//		res%=1000;
//	}
//	if(res < 10) cout<<"00"<<res;
//	else if(res <100&&res >10) cout<<"0"<<res;
//	else cout<<res;
//	return 0;
//}

#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	double h;
	cin>>h;
	double s = h,h10;
	h10 = h/1024;
	cout<<h*767/256<<endl;
	cout<<h10<<endl;
	return 0;
}