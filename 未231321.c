#include <stdio.h>
int main(){
	long long a[101][101],l[101][101];
	int n,k,m;
	scanf("%d%d%d",&n,&m,&k);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<k;j++){
			scanf("%d",&l[i][j]);
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<k;j++){
			int c = 0;
			for(int k = 0;k<m;k++){
				c+=a[i][k]*l[k][j];
			}
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
}