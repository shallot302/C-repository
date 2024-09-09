// #include <stdio.h>
//
// int main(void)
// {
//     int k = 0;
//     int arr[100];
//     for(int i = 0;i<3;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<3;i++)
//     {
//         if(arr[i]<60)
//         {
//             k++;
//         }
//     }
//     if(k==1) printf("1");
//     else printf("0");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     scanf("%d",&i);
//     if(i == 1)
//     {
//         printf("NO");
//     }
//     else if(i == 3)
//     {
//         printf("NO");
//     }
//     else if(i == 5)
//     {
//         printf("NO");
//     }
//     else
//     {
//         printf("YES");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int mile;
//     scanf("%d",&mile);
//     double walktime,biketime;
//     walktime = mile/1.2;
//     biketime = mile/3.0+27.0+23.0;
//     if(walktime > biketime)
//     {
//         printf("Bike");
//     }
//     else if(walktime < biketime)
//     {
//         printf("Walk");
//     }
//     else
//     {
//         printf("All");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float x,y;
//     scanf("%f",&x);
//     if(x>=0&&x<5)
//     {
//         y=-x+2.5;
//     }
//     else if(x>=5&&x<10)
//     {
//         y=2-1.5*(x-3)*(x-3);
//     }
//     else if(x>=10&&x<20)
//     {
//         y = x/2 -1.5;
//     }
//     printf("%.3f",y);
//     return 0;
// }
