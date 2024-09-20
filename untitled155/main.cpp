// #include <iostream>
// #include <algorithm>
// using namespace std;
// void finf_sum(int a[],int n,int m)
// {
//     sort(a,a+n);
//     int i = 0;int j = n-1;
//     while(i<j)
//     {
//         int sum = a[i] + a[j];
//         if(sum>m)j--;
//         if(sum<m)i++;
//         if(sum == m)
//         {
//             cout<<a[i]<<""<<a[j]<<endl;
//             i++;
//         }
//     }
// }
// int main()
// {
//
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     while(n--)
//     {
//         string s;cin>>s;
//         bool ans = true;
//         int i = 0,j = s.size() - 1;
//         while(i<j)
//         {
//             if(s[i] != s[j])
//             {
//                 ans = false;
//                 break;
//             }
//             i++;
//             j--;
//         }
//         if(ans)cout<<"yes"<<endl;
//         else cout<<"no"<<endl;
//
//     }
//     return 0;
// }




// #include <iostream>
// void findsum(int *a,int n,int s)
// {
//     int i = 0,j=0;
//     int sum = a[0];
//     while(j<n)
//     {
//         if(sum>=s)
//         {
//             if(sum == s)printf("%d%d",i,j);
//             sum -= a[i];
//             i++;
//             if(i<j)
//             {
//                 sum = a[i];j++;
//             }
//             if(sum < s){j++;sum+=a[j];}
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// const int N =2e5+5;
// int a[N];
// int main()
// {
//     int n ,c;cin>>n>>c;
//     for(int i = 1;i<=n;i++)cin>>a[i];
//     sort(a+1,a+1+n);
//     long long ans =0;
//     for(int i = 1,j=1,k=1;i<=n;i++)
//     {
//         while(j<=n&&a[j]-a[i]<c)j++;
//         while(k<=n&&a[k]-a[i]<c)k++;
//         if(a[j]-a[i] == c&&a[k-1] - a[i]==c&&k-1>=1)ans = k-j;
//     }
//     cout<<ans;
//     return 0;
// }



// #include <iostream>
// int binsearch(int *a,int n,int x)
// {
//     int left = 0;int right = n;
//     while(left<right)
//     {
//         int mid = (left+right)>>1;
//         if(a[mid]>=x)
//         {
//             right =mid;
//         }
//         else left = mid+1;
//     }
//     return left;
// }

// int binsearch2(int *a,int n,int x)
// {
//     int left = 0;int right = n;
//     while(left<right)
//     {
//         int mid =(left +right+1)>>1;
//         if(a[mid]<=x)left =mid;
//         else right = mid -1;
//     }
//     return left;
// }
