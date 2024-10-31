//#include <string>
//#include <cmath>
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	string s;
//	cin>>s;
//	for(int i = 0;i<(int)s.size();i++){
//		if((s[i] + n)<='z') s[i] = s[i] +n;
//		else s[i] = s[i] - 26+n;
//		
//	}
//	cout<<s;
//	return 0;
//}




#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int N,N1;
	cin>>N;
	N1 = N;
	int temp[10] = {0,0,0,0,0,0,0,0,0,0},sum;
	if(N>=100){
		temp[0] = N/100;
		
		N = N%100;
	}
	if(N>=50){
		temp[1] = N/50;
	
		N = N%50;
	}
	if(N>=20){
		temp[2] = N/20;
		
		N = N%20;
	}
	if(N>=10){
		temp[3] = N/10;
		
		N = N%10;
	}
	if(N>=5){
		temp[4] = N/5;
		
		N = N%5;
	}
	if(N>=2){
		temp[5] = N/2;
		
		N = N%2;
	}
	if(N == 1){
		N = 0;
		temp[6] = 1;
		
	}
	printf("%d\n",N1);
	printf("%d nota(s) de R$ 100,00\n",temp[0]);
	printf("%d nota(s) de R$ 50,00\n",temp[1]);
	printf("%d nota(s) de R$ 20,00\n",temp[2]);
	printf("%d nota(s) de R$ 10,00\n",temp[3]);
	printf("%d nota(s) de R$ 5,00\n",temp[4]);
	printf("%d nota(s) de R$ 2,00\n",temp[5]);
	printf("%d nota(s) de R$ 1,00\n",temp[6]);
	
	return 0;
}