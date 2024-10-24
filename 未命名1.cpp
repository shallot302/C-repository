////lesson 1
//
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 9;
//int st[N];
//bool used[N];
//int n;
//void dfs(int u){
//    if(u>n){
//        for(int i = 1;i<=n;i++)printf("%d ",st[i]);
//        puts("");
//        return;
//    }
//    for(int i = 1;i<=n;i++){
//        if(!used[i]){
//            st[u] = i;
//            used[i] = true;
//            dfs(u+1);
//            st[u] = 0;
//            used[i] = false;
//        
//            
//        }
//    }
//}
//int main(){
//    scanf("%d",&n);
//    dfs(1);
//    return 0;
//}







////lesson 2
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 16;
//int n;
//bool used[N];
//void dfs(int u){
//	if(u>n){
//		for(int i = 1;i<=n;i++){
//			if(used[i]) printf("%d ",i);
//		}
//		printf("\n");
//		return;		
//	}
//	else{
//		used[u] = true;
//		dfs(u+1);
//		
//		used[u] = false;
//		dfs(u+1);
//	}
//}
//int main(){
//	cin>>n;
//	dfs(1);
//	return 0;
//}
