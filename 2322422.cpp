//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//	int cnt = 0,sum = 0;
//	for(int i = 1;i<100;i++){
//		int poke = 1;
//		for(int j = 2;j<i;j++){
//			if(i%j == 0){
//				poke = 0;
//				break;
//			}
//		
//			
//		}
//		if(poke){
//			sum+=i;
//			cout<<i<<' ';
//			
//			cnt++;
//		}
//		
//	}
//	cout<<endl<<sum<<' '<<cnt;
//	return 0;
//}


#include <stdio.h>
int main(){
	int count = 0;int a = 1,b = 2;
	for(int a = 1;a<=100;a++){
		int flag = 1;
		for(int b = 2;b<a;b++){
			if(a%b == 0){
				flag = 0;
				break;
			
			}
		}
		if(flag){
			printf("%d ",a);
			count++;
		}
	}
	printf("%d",count);
	return 0;
}