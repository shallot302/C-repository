#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int N,S;
//         cin>>N>>S;
//         int arr[100001];
//         for(int i = 0;i<N;i++)
//         {
//             cin>>arr[i];
//         }
//         sort(arr,arr+N);
//         int res = N+1;
//         int sum = 0;
//         int i = 0,j = 0;
//         while(true)
//         {
//             while(j<N && sum<S)
//             {
//                 sum += arr[j];
//                 j++;
//             }
//             if(sum<S){break;}
//             res = min(res,j-i);
//             sum -= arr[i++];
//         }
//         if(res>N)
//         {
//             res=0;
//         }
//         cout<<res<<endl;
//     }
//     return 0;
// }

// int main()
// {
//     map<int,int>mymap;
//     int n,c;
//     cin>>n>>c;
//     int a[300000];
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i];
//         mymap[a[i]]++;
//     }
//     sort(a,a+n);
//     n = unique(a,a+n) -a;
//
//     long long ans = 0;
//     for(int i = 0;i<n;i++)
//     {
//         if((mymap[a[i]]&&mymap[a[i]-c]))
//         {
//             ans += ((long long)mymap[a[i]] *mymap[a[i]-c]);
//         }
//     }
//     cout<<ans;
//     return 0;
// }


