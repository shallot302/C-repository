#include <stdio.h>
#include <math.h>
using namespace std;
int cnt;
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i = m;i<=n;i++){
		int emp1,emp2,emp3;
		emp1 = i%10;
		emp2 = (i%100-emp1)/10;
		emp3 = (i-10*emp2-emp1)/100;
		if(i == pow(emp1,3)+pow(emp2,3)+pow(emp3,3)){
			printf("%d ",i);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("No Answer");
	}
	return 0;
}