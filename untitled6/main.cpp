#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 9;
int st[N];//0表示还没放数，1~n表示放了那些数

bool used[N];//true表示用过；false表示没用过
int n;
void dfs(int u)
{
    if(u>n){


        for(int i =1;i<=n;i++)printf("%d",st[i]);
        puts("");
        return;
    }
    for(int i  =1;i<=n;i++)
        if(!used[i])
        {
            st[u] = i;
            used[i] =true;
            dfs(u+1);
            //回复现场
            st[u] = 0;
            used[i] = false;
        }

}
int main()
{
    scanf("%d",&n);
    dfs(1);
    return 0 ;
}