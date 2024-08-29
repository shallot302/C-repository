// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int five = 0;
//     int ten = 0;
//     int ok = 1;
//     for(int i = 0;i<n;i++)
//     {
//         int x = 0;
//         scanf("%d",&x);
//         if(x == 5)
//         {
//             five++;
//         }
//         else if(x==10)
//         {
//             if(five>0)
//             {
//                 five--;
//                 ten++;
//             }else
//             {
//                 ok = 0;
//                 break;
//             }
//         }
//         else if(x == 20)
//         {
//             if(ten>0&&five>0)
//             {
//                 ten--;
//                 five--;
//             }
//             else if(five>=3)
//             {
//                 five -= 3;
//             }
//             else
//             {
//                 ok =0;
//                 break;
//             }
//         }
//     }
//     if(ok ==1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//
//
//
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int cmp(const void* v1,const void* v2) {
//     return *(const char*)v1 - *(const char*)v2;
// }
//
// int main()
// {
//     char str[210];
//     scanf("%s",str);
//     int size = strlen(str);
//     qsort(str,size,sizeof(char),cmp);
//     printf("%s",str);
//
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[46];
//     for(int i = 0;i<46;i++)
//     {
//         arr[0] = 1;arr[1] = 2;
//         if(i>=2)
//         {
//             arr[i] = arr[i-1]+arr[i-2];
//         }
//     }
//     printf("%d",arr[n-1]);
//     return 0;
// }





// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     for(int i = 0;i<N;i++)
//     {
//         long long n;
//         scanf("%lld",&n);
//         getchar();
//         getchar();
//         int arr[100];
//         int size = 0;
//         while(n>0)
//         {
//             arr[size] = n%10;
//             n/=10;
//             size++;
//         }
//         for(int i = 0;i<size;i+=2)
//         {
//             int x = arr[i];
//             x*=7;
//             while(x > 9)
//             {
//                 int y = x;
//                 int sum = 0;
//                 while(y > 0)
//                 {
//                     sum += y%10;
//                     y/=10;
//                 }
//                 x = sum;
//             }
//             arr[i] = x;
//         }
//         int sum = 0;
//         for(int i = 0;i<N;i++)
//         {
//             sum+=arr[i];
//         }
//         if(sum % 8 == 0)
//         {
//             printf("T");
//         }else
//         {
//             printf("F");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n] = {0};
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int cnt[101] = {0};
//     for(int i = 0;i<n;i++)
//     {
//         cnt[arr[i]]++;
//     }
//     int mxi = 0;//出现最多的数
//     int mxn = 0;//出现最多的数出现了多少次
//     for(int i = 0;i<=100;i++)
//     {
//         if(cnt[i]>mxn)
//         {
//             mxi = i;
//             mxn = cnt[i];
//         }
//     }
//     printf("%d",mxi);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int prefix[n];
//     int suffix[n];
//     prefix[0] = arr[0];
//     for(int i = 1;i<n;i++)
//     {
//         int max = 0;
//         if(prefix[i-1] > arr[i])
//         {
//             max = prefix[i-1];
//         }else
//         {
//             max = arr[i];
//         }
//         prefix[i] = max;
//     }
//     suffix[n-1] = arr[n-1];
//     for(int i = n-2;i>=0;i--)
//     {
//         int max = 0;
//         if(suffix[i+1] > arr[i])
//         {
//             max = suffix[i+1];
//         }else
//         {
//             max = arr[i];
//         }
//         suffix[i] = max;
//     }
//     int ans = 0;
//     for(int i = 0;i<n;i++)
//     {
//         int min = 1e6;
//         if(prefix[i] < suffix[i])
//         {
//             min = prefix[i];
//         }
//         else
//         {
//             min = suffix[i];
//         }
//         ans += min - arr[i];
//     }
//     printf("%d",ans);
//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void* v1,const void* v2) {
//     return *(const int*)v1 - *(const int*)v2;
// }
//
// int main()
// {
//     int n,k;
//     scanf("%d%d",&n,&k);
//     int arr[n];
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     qsort(arr,n,sizeof(int),cmp);
//     int left = 0;
//     int right = 1;
//     int max = 0;
//     while(right < n)
//     {
//         while(right < n && arr[right] - arr[left] <= k)
//         {
//             right++;
//         }
//         if(right - left > max)
//         {
//             max = right - left;
//         }
//         while(left < n && arr[right] - arr[left] > k)
//         {
//             left++;
//         }
//
//     }
//     printf("%d",max);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void* v1,const void* v2) {
//     return *(const int*)v1 - *(const int*)v2;
// }
// int main()
// {
//     int n,k;
//     scanf("%d%d",&n,&k);
//     int arr[n];
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     qsort(arr,n,sizeof(int),cmp);
//     int left = 0;
//     int right = 0;
//     int max = 0;
//     while(right < n)
//     {
//         while(right < n && arr[right] - arr[left] <= 2+k)
//         {
//             right++;
//         }
//         if(right - left > max)
//         {
//             max = right - left;
//         }
//         while(left < n && arr[right] - arr[left] > 2+k)
//         {
//             left++;
//         }
//     }
//     printf("%d",max);
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char str[n][20100];
//     int size = 20000;
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%s",str[i]);
//         int sz = strlen(str[i]);
//         if(sz < size)
//         {
//             size = sz;
//         }
//     }
//     int maxsize = 0;
//     for(int i = 0;i<size;i++)
//     {
//         int ok = 1;
//         for(int j=1;j<n;j++)
//         {
//             if(str[j][i] != str[j-1][i])
//             {
//                 ok = 0;
//             }
//         }
//         if(ok == 0)
//         {
//             break;
//         }
//         maxsize++;
//     }
//     for(int i = 0;i<maxsize;i++)
//     {
//         printf("%c",str[0][i]);
//     }
//     return 0;
// }
