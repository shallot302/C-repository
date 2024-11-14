#include <stdio.h>
int main()
{
	int n,a[20001],i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);		//输入每个数 
		if(a[t]==0){		//在初始化的数组中，判断整数是否第一次出现 
			printf("%d ",t);
			a[t]=1;			//让已经出现的整数的数组变为1 
		}
	}
	
	return 0;
}
 
​