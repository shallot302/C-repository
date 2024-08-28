//fentangguo
// #include <stdio.h>
// int main()
// {
//     int n = 5;
//     int sum = 0;
//     int arr[10] = {0};
//     for(int i = 0;i < n;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum += arr[i];
//     }
//     for(int i = 0;i<n;i++)
//     {
//         int temp = arr[i]/3;
//         arr[i] /= 3;
//         arr[(i+1)%n] += temp;
//          arr[(i-1+n)%n] += temp;
//     }
//     for(int i = 0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//         sum -= arr[i];
//     }
//     printf("\n%d",sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int sum = 0;
//     int a[110] = {0};
//     for (int i = 0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//
//     }
//     for(int i = 0;i<n;i++)
//     {
//         sum += a[i];
//     }
//     printf("%.2f",(double)sum / n);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float sum = 0;
//     int n = 0;
//     scanf("%d",&n);
//     float a[101] = {0};
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%f",&a[i]);
//     }
//     for(int i = 0;i<n;i++)
//     {
//         sum += a[i];
//     }
//     printf("%.4f",(double)(sum/n));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int a[110] = {0};
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i = 0;i<n;i++)
//     {
//         int cnt = 0;
//         for(int j = 0;j<i;j++)
//         {
//             if(a[j]<a[i])
//             {
//                 cnt ++;
//             }
//         }
//         printf("%d ",cnt);
//     }
//     return 0;
// }