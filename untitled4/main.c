// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void* v1,const void* v2) {
//     return *(const char*)v1 - *(const char*)v2;
// }
// struct student
// {
//     char name[21];
//     char score;
// };
// int main()
// {
//     struct student a[100],t;
//     int n;
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++)
//     {
//         scanf("%s %d",a[i].name,&a[i].score);
//     }
//     for(int i = 1;i<=n-1;i++)
//     {
//         for(int j = 1;j<=n-i;j++)
//         {
//             if(a[j].score<a[j+1].score)
//             {
//                 t = a[j];
//                 a[j]=a[j+1];
//                 a[j+1] =t;
//             }
//         }
//
//     }
//     for(int i = 1;i<=n;i++)
//     {
//         printf("%s\n",a[i].name);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int head,tail;
//     int a[101] ={0,6,3,1,7,5,8,9,2,4};
//     head=1;
//     tail=10;
//     while (head<tail)
//     {
//         printf("%d",a[head]);
//         head++;
//         a[tail]= a[head];
//         tail++;
//         head++;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[201],s[201];
//     int i,len,mid,next,top;
//     gets(a);
//     len = strlen(a);
//     mid = len/2-1;
//     top = 0;
//     for(i = 0;i<=mid;i++)
//         s[++top] = a[i];
//     if(len%2 == 0)
//         next = mid+1;
//     else
//         next = mid+2;
//     for(i = next;i<=len - 1;i++)
//     {
//         if(a[i]!=s[top])
//         {
//             break;
//         }
//         top--;
//     }
//     if(top == 0)
//         printf("YES");
//     else
//         printf("NO");
//     getchar();
//     getchar();
//     return 0;
// }
#include <stdio.h>
struct queue
{
    int data[1000];
    int head;
    int tail;
};
struct stack
{
    int data[10];
    int top;
};
int main()
{
    struct queue q1,q2;
    struct stack a;
    int t,flag,i;
    int book[10];
    q1.head =1;q1.tail =1;
    q2.head =1;q2.tail = 1;
    a.top=0;
    for(i=0;i<=9;i++)
    {
        book[i] = 0;
    }
    for(i = 1;i<=6;i++)
    {
        scanf("%d",&q1.data[q1.tail]);
        q1.tail++;
    }
    for(i = 1;i<=6;i++)
    {
        scanf("%d,",&q2.data[q2.tail]);
        q2.tail++;
    }
    while(q1.head<q1.tail&&q2.head<q2.tail)
    {
        t=q1.data[q1.head];
        if(book[t] == 0)
        {
            q1.head++;
            a.top++;
            a.data[a.top]=t;
            book[t]=1;

        }
        else
        {
            q1.head++;
            q1.data[q1.tail]=t;
            q1.tail++;
            while(a.data[a.top]!=t)
            {
                book[a.data[a.top]]=0;
                q1.data[q1.tail] =a.data[a.top];
                q1.tail++;
                a.top--;
            }
        }
        t=q2.data[q2.head];
        if(book[t] == 0)
        {
            q2.head++;
            a.top++;
            a.data[a.top]=t;
            book[t]=1;

        }
        else
        {
            q2.head++;
            q2.data[q2.tail]=t;
            q2.tail++;
            while(a.data[a.top]!=t)
            {
                book[a.data[a.top]]=0;
                q2.data[q2.tail] =a.data[a.top];
                q2.tail++;
                a.top--;
            }
        }
    }
    if(q2.head==q2.tail)
    {
        printf("xiaohengwin\n");
        printf("xiaohengdangqianshouzhongdepaishi:");
        for(i=q1.head;i<=q1.tail-1;i++)
            printf(" %d",q1.data[i]);
        if(a.top>0)
        {
            printf("\nzhuoshangdepaishi:");
            for(i=1;i<=a.top;i++)
                printf(" %d",a.data[i]);
        }
        else
            printf("\nzhuoshangyijingmeiyoupaile");
    }
    else
    {
        printf("xiaohawin\n");
        printf("xiaohadangqianshouzhongdepaishi");
        for(i=q2.head;i<=q2.tail-1;i++)
            printf(" %d",q2.data[i]);
        if(a.top>0)
        {
            printf("\nzhuoshangdepaishi:");
            for(i=1;i<=a.top;i++)
                printf(" %d",a.data[i]);
        }
        else
            printf("\nzhuoshangyijingmeiyoupaile");
    }
    return 0;
}
