// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[101];
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     printf("%d",a[n-1]);
//
//     return 0;
// }
// int main()
// {
//     int n,a[101],b[101],c[101];
//     cin>>n;
//     int asum = 0,bsum= 0,csum= 0,sum = 0;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i]>>b[i]>>c[i];
//         asum +=a[i];
//         bsum +=b[i];
//         csum +=c[i];
//     }
//     sum=asum+bsum+csum;
//     printf("%d %d %d %d",asum,bsum,csum,sum);
//
//
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m,n,sum = 0;
//     cin>>m>>n;
//     for(int i = m;i<=n;i++)
//     {
//         if(i%17 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k,point1=0,point5=0,point10=0;
//     cin>>k;
//     int a[101];
//     for(int i = 0;i<k;i++)
//     {
//         cin>>a[i];
//         if(a[i] == 1)
//         {
//             point1++;
//         }
//         if(a[i] == 5)
//         {
//             point5++;
//         }
//         if(a[i] == 10)
//         {
//             point10++;
//         }
//     }
//     cout<<point1<<endl<<point5<<endl<<point10;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long b,a,c = 1;
//     cin>>a>>b;
//     for(int i = 0;i<b;i++)
//     {
//         c *=a;
//     }
//     cout<<c;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double x,n;
//     cin>>x>>n;
//     for(int i = 0;i<n;i++)
//     {
//         x += 0.001*x;
//     }
//     cout<<fixed<<setprecision(4)<<x;
//     return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[31],b[31];
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//
//     for(int i = 2;i<31;i++)
//     {
//         b[0] = 1;b[1] = 1;
//         b[i] = b[i-2] + b[i-1];
//     }
//     for(int i = 0;i<n;i++)
//     {
//         cout<<b[a[i]-1]<<endl;
//     }
//     return 0;
// }


