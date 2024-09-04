// #include <stdio.h>
// int main()
// {
//     int a[11],i,j,t;
//     for(i = 0;i<=10;i++)
//         a[i] = 0;
//     for(i=1;i<=5;i++)
//     {
//         scanf("%d",&t);
//         a[t]++;
//     }
//
//     for(i = 0;i<=10;i++)
//         for(j = 1;j<=a[i];j++)
//             printf("%d",i);
//     getchar();
//     getchar();
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int book[1001],i,j,t,n;
//     for(i=0;i<=1000;i++)
//         book[i]=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d",&t);
//         book[t]++;
//     }
//     for(i=1000;i>=0;i--)
//         for(j=1;j<=book[i];j++)
//             printf("%d ",i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[100],i,j,t,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         scanf("%d",&a[i]);
//     for(i=1;i<=n-1;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             if(a[j] < a[j+1])
//             {
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//             }
//         }
//     }
//     for(i=n-1;i>=0;i--)
//         printf("%d ",a[i]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[100],i,j,t,n;
//     scanf("%d",&n); //输入一个数n，表示接下来有n个数
//     for(i=1;i<=n;i++) //循环读入n个数到数组a中
//         scanf("%d",&a[i]);
//      //冒泡排序的核心部分
//      for(i=1;i<=n-1;i++) //n个数排序，只用进行n-1趟
//      {
//          for(j=1;j<=n-i;j++)
//               {
//                   if(a[j]<a[j+1]) //比较大小并交换
//                   { t=a[j];a[j]=a[j+1];a[j+1]=t;}
//               }
//      }
//     for(i=n;i>0;i--)
//     {
//         //倒序输出结果
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     for(i=1;i<=n;i++)
//     {
//         //顺序输出结果
//         printf("%d ",a[i]);
//     }
//
//     getchar();getchar();
//     return 0;
// }

// #include <stdio.h>
// struct student
// {
//     char name[21];
//     char score;
// };
// int main()
// {
//     struct student a[100],t;
//     int i,j,n;
//     scanf("%d",&n); //输入一个数n
//     for(i=1;i<=n;i++) //循环读入n个人名和分数
//         scanf("%s %d",a[i].name,&a[i].score);
//      for(i=1;i<=n-1;i++)
//      {
//          for(j=1;j<=n-i;j++)
//          {
//              if(a[j].score<a[j+1].score)//对分数进行比较
//              { t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
//          }
//      }
//     for(i=1;i<=n;i++)
//         printf("%s\n",a[i].name);
//     getchar();getchar();
//     return 0;
// }

// #include <stdio.h>
// int a[101],n;
// void quick(int left,int  right)
// {
//     int i,j,k,temp;
//     if(left>right)
//     return;
//
//     temp = a[left];
//     i = left;
//     j = right;
//     while(i!=j)
//     {
//         while(a[j]>=temp&& i < j)
//         {
//             j--;
//         }
//         while(a[i]<=temp&& i < j)
//         {
//             i++;
//         }
//         if(i<j)
//         {
//             temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//
//     }
//     a[left] =a[i];
//     a[i] =temp;
//
//     quick(left,i-1);
//     quick(i+1,right);
// }
// int main()
// {
//     int i;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         scanf("%d",&a[i]);
//     quick(1,n);
//
//     //输出排序后的结果
//     for(i=1;i<=n;i++)
//         printf("%d ",a[i]);
//     getchar();getchar();
//     return 0;
// }
// #include <stdio.h>
// int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
// void quicksort(int left,int right)
// {
//     int i,j,t,temp;
//     if(left>right)
//         return;
//
//     temp=a[left]; //temp中存的就是基准数
//     i=left;
//     j=right;
//     while(i!=j)
//     {
//         //顺序很重要，要先从右往左找
//         while(a[j]>=temp && i<j)
//             j--;
//         //再从左往右找
//         while(a[i]<=temp && i<j)
//             i++;
//         //交换两个数在数组中的位置
//         if(i<j)//当哨兵i和哨兵j没有相遇时
//         {
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//     }
//     //最终将基准数归位
//      a[left]=a[i];
//     a[i]=temp;
//
//     quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程
//     quicksort(i+1,right);//继续处理右边的，这里是一个递归的过程
// }
// int main()
// {
//     int i;
//     //读入数据
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         scanf("%d",&a[i]);
//     quicksort(1,n); //快速排序调用
//
//     //输出排序后的结果
//     for(i=1;i<=n;i++)
//         printf("%d ",a[i]);
//     getchar();getchar();
//     return 0;
// }