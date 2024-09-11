// #include <stdio.h>
// int main()
// {
//     long long x,bill;
//     char c;
//     scanf("%lld",&x);
//     scanf(" %c",&c);
//     if(x<=1000)
//     {
//         bill = 8;
//     }
//     else if(x>1000)
//     {
//         bill = 8+(x-1000)/500*4;
//         if((x-1000)%500>0)
//         {
//             bill=bill+4;
//         }
//     }
//     if(c == 'y')
//     {
//         bill = bill + 5;
//         printf("%lld",bill);
//     }
//     else if(c == 'n')
//     {
//         printf("%lld",bill);
//     }
//
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int arr[3];int max = -1e9;
//     for(int i = 0;i<3;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//
//     for(int i = 0;i<3;i++)
//     {
//
//         if(arr[i] >max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }