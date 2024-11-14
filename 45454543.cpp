#include <cstdio>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[101][101];
	int sum = 0;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			scanf("%d",&a[i][j]);
			if((i == 1||i==m)||(j==n||j==1)){
				sum+=a[i][j];
			}		
			}
	}
	

	printf("%d",sum);
	return 0;
}