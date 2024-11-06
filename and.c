#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void* v1,const void* v2){
	return *(const int*)v1 - *(const int*)v2;
}
int main(){
	int a[100],b[100];
	int cnt = 0,mnt = 0;
	for(int i = 0;a[i]!=-1;i++){
		scanf("%d",&a[i]);
		cnt++;
		if(a[i] == -1){
			break;
		}
	}
	for(int j = 0;b[j]!=-1;j++){
		scanf("%d",&b[j]);
		mnt++;
		if(b[j] == -1){
			break;
		}
	}
	qsort(a,cnt,sizeof(int),cmp);
	qsort(b,mnt,sizeof(int),cmp);
	int temp = 0;
	for(int i = 1;i<=cnt;i++){
		for(int j = 1;j<=mnt;j++){
			if(a[i] == b[j])
				if(a[i] == -1){
					;
				}
				else{
					if(b[j]>=temp){
					
					temp = b[j];
					printf("%d ",b[j]);
					}
				} 
		}
	}
	return 0;
}