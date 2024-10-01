// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     long long  a,b,c,d,e;
// //     cin>>a>>b>>c>>d>>e;
// //     long long A,B,C,D;
// //     cin>>A>>B>>C>>D;
// //     long long sum =  0;
// //     sum = A*a+B*b+c*C+D*d;
// //     if(sum>e)
// //     {
// //         cout<<"YES";
// //     }
// //     if(sum<=e) cout<<"NO";
// //
// //     return 0;
// // }
// //
// //
// //
// // #include <stdio.h>
// // int main()
// // {
// //     int a,b,c,d,e;
// //     int A,B,C,D;
// //     while (scanf("%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&A,&b,&C,&D) != EOF){
// //
// //         int sum =  0;
// //         sum = A*a+B*b+c*C+D*d;
// //         if(sum>e)
// //         {
// //             printf("YES");
// //         }
// //         else if(sum<=e) printf("NO");
// //     }
// //     return 0;
// // }#include <stdio.h>
// // int main()
// // {
// //     int a,b,c,d,e;
// //     int A,B,C,D;
// //     while (scanf("%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&A,&b,&C,&D) != EOF){
// //
// //         int sum =  0;
// //         sum = A*a+B*b+c*C+D*d;
// //         if(sum>e)
// //         {
// //             printf("YES");
// //         }
// //         else if(sum<=e) printf("NO");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int n ;
// //     scanf("%d",&n);
// //     int sum = 1;
// //     while(n != 1)
// //     {
// //         n = n/2;
// //         sum = sum+n;
// //     }
// //     printf("%d",sum);
// // }
//
// // #include <stdio.h>
// // int main()
// // {
// //     int a[9],b[9];
// //     for(int i = 0;i<8;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     for(int i = 0;i<8;i++)
// //     {
// //         scanf("%d",&b[i]);
// //     }
// //     int fild = 0;
// //     int win = 0;
// //     while(fild != 8)
// //     {
// //         for(int i = 1;i<8;i++)
// //         {
// //             if(a[0] >a[i])
// //             {
// //                 a[0] = a[0]+b[i];
// //                 break;
// //             }
// //             if() fild++;
// //         }
// //     }
// //
// //     return 0;
// // }
//
//
//
// //
// // #include <stdio.h>
// // int main()
// // {
// //     long long n,a[200001],s,l,b[200001];
// //     for(int i = 0;i<n;i++)
// //     {
// //         scanf("%d",a[i]);
// //     }
// //     for(int i = 0;i<n;i++)
// //     {
// //         scanf("%d",b[i]);
// //     }
// //     int month = 0;
// //     while(n)
// //     {
// //         for(int i = 0;i<n;i++)
// //         {
// //             month++;
// //             a[i] = a[i]+b[i];
// //         }
// //         for(int k = 0;k<n;k++)
// //         {
// //             for(int j = n-1;j<n;j--)
// //             {
// //                 if()
// //             }
// //         }
// //     }
// //     return 0;
// // }
// //
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     while (scanf("%d",&n) != EOF){
//         long long sum = 1+n/2;
//         for(int i = 1;i<=n/2;i++)
//         {
//             int temp = i;
//             while(temp!=1)
//             {
//                 sum = sum + temp/2;
//                 temp = temp/2;
//             }
//         }
//         printf("%lld",sum);
//     }
//     return 0;
// }
//
// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //
// //     return 0;
// // }