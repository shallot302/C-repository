#include <stdio.h>
int tri(int i,int j,int arr[20][20]){
	arr[0][0] = 1;arr[1][0] = 1,arr[1][1] = 1;
	arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
	return arr[i][j];
}
int main(){
	int n;scanf("%d",&n);
	int arr[20][20] = {0};
	arr[0][0] = 1;arr[1][0] = 1,arr[1][1] = 1;
	for(int i = 0;i<n+1;i++){
		if(n-i>0){
			for(int k = 0;k<n-i;k++){
				printf("  ");	
			}
		}
		for(int j = 0;j<i+1;j++){
			if(i==0&&j==0||i==1&&j==0||i==1&&j==1){
				printf("%4d",1);
			}
			else printf("%4d",tri(i,j,arr));
		}
		if(i!=n){
			printf("\n");
		}
		
	}
	return 0;
}