#include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     float a[21],b[21];
//     double ans[21];
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i]>>b[i];
//         ans[i] = b[i]/a[i];
//         if(i !=0)
//         {
//             if(ans[i]-ans[0]>0.05)
//             {
//                 cout <<"better"<<endl;
//             }
//             else if(ans[0]-ans[i]>0.05)
//             {
//                 cout <<"worse"<<endl;
//             }
//             else
//             {
//                 cout <<"same"<<endl;
//             }
//         }
//     }
//     return 0;
// }
// using namespace std;
// #include <math.h>
// int main()
// {
//     double n,a[1000],b[1000],c[10000];
//     double time = 0,totime = 0;
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i]>>b[i]>>c[i];
//         time = sqrt(a[i]*a[i]+b[i]*b[i])/25+c[i]*1.5;
//         totime+=time;
//
//     }
//     cout<<int(ceil(totime));
//     return 0;
// }
// //double真好用题，float过小导致WA
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m,n,a[101];
//     cin>>m>>n;
//     int non = 0;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i];
//         if(a[i]<m)
//         {
//            m = m-a[i];
//         }
//         else if(a[i]>m)
//         {
//             non++;
//         }
//     }
//     printf("%d",non);
//
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[101],w,h,m,d,sum = 0;
//     cin>>n;
//     for(int i = 0 ;i<n;i++)
//     {
//         cin>>a[i];
//         w = a[i]%10;
//         h = (a[i]%100-w)/10;
//         m = (a[i]%1000-w-10*h)/100;
//         d = a[i]/1000;
//         if(w-d-m-h>0)
//         {
//             sum++;
//         }
//
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double n,p[31],q[31];
//     double sum = 0;
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         p[0] =  1;q[0] = 2;
//         q[i + 1] = q[i]+p[i];
//         p[i+1] = q[i];
//         sum += q[i]/p[i];
//
//     }
//     printf("%.4lf",sum);
//
//
//     return 0 ;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double n;
//     cin>>n;
//     double sum = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         if(i%2 == 0)
//         {
//             sum -= 1.0/i;
//         }
//         else
//         {
//             sum += 1.0/i;
//         }
//     }
//     printf("%.4lf",sum);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i = 2;
    cin>>a>>b>>c;
    while(i)
    {
        if(a%i == b%i&&b%i == c%i)
        {
            cout<<i;
            break;
        }
        i++;
    }
}