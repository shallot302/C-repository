//斐波那契数列
// #include <iostream>
// #include <cstring>
// #include <cstdio>
// #include <algorithm>
// using namespace std;
// int fn(int n)
// {
//     if(n == 1)return 1;
//     if(n == 2)return 2;
//     return fn(n-1)+fn(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fn(n)<<endl;
//     return 0 ;
// }
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
const int N = 16;
using namespace std;
int n;
int st[N];
//状态记录每个位置的状态，0表示还没决定，1表示选他，2表示不选它
int ways[1<<15][15],cnt;
// vector<vector<int>> ways;
void dfs(int u)
{
    if(u > n)
    {
        // vector<int>way;
        // for(int i = 1;i<=n;i++)
        // {
        //     if(st[i] == 1)
        //     {
        //         way.push_back(i);
        //     }
        // }
        // ways.push_back(way);
        // return;
        // for(int i = 1;i<=n;i++)
        // {
        //     if(st[i] == i)
        //         ways[cnt][i] = i;
        // }
        for(int i = 1;i<=n;i++)
        {
            if(st[i] == 1)printf("%d ",i);
            printf("\n");
        }
        st[u] = 2;
        dfs(u + 1);//第一个分支不选
        st[u] = 0;//恢复现场
        st[u] =1;
        dfs(u+1);//第二个分支选
        st[u] = 0;
        return;
    }

}
 int main()
 {
     cin>>n;
     dfs(1);
     for(int i = 1;i<=n;i++)
     {
         for(int j = 1;j<=n;j++)printf("%d",ways[i][j]);
         puts("");
     }
     // for(int i =1;i<=ways.size();i++)
     // {
     //     for(int j = 1;j < ways[i].size();j++)printf("%d",ways[i][j]);
     //     puts("");
     // }

     return 0;
 }
