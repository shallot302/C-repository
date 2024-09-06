// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;
//     printf("%d",*p);
//     getchar();
//     getchar();
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     *p = 10;
//     printf("%d",*p);
//
//     getchar();
//     getchar();
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// int main()
// {
//     int i,n,a;
//     scanf("%d",&n);
//     struct node *head;
//     head = NULL;
//     struct node *p,*q,*t;
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d",&a);
//         p = (struct node *)malloc(sizeof(struct node));
//         p->data = a;
//         p->next = NULL;
//         if(head == NULL)
//         {
//             head = p;
//         }
//         else
//         {
//             q->next=p;
//         }
//         q = p;
//     }
//     scanf("%d",&a);
//     t = head;
//     while(t!=NULL)
//     {
//         if(t->next->data >a)
//         {
//             p = (struct node *)malloc(sizeof(struct node));
//             p ->data = a;
//             p->next = t->next;
//             t->next = p;
//             break;
//         }
//         t = t->next;
//     }
//     t = head;
//     while(t!=NULL)
//     {
//         printf("%d ",t->data);
//         t = t->next;
//     }
//     getchar();
//     getchar();
//
//
//
//     return 0;
// }

#include <stdio.h>
int main()
{
    int data[101],right[101];
    int i,n,t,len;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&data[i]);
    }
    len = n;
    for(i = 1;i<=n;i++)
    {
        if(i!=n)
        {
            right[i]=i+1;
        }
        else
        {
            right[i] = 0;
        }
    }
    len++;
    scanf("%d",&data[len]);
    t = 1;
    while(t!=0)
    {
        if(data[right[t]]>data[len])
        {
            right[len] = right[t];
            right[t]  =len;
            break;
        }
        t = right[t];
    }
    t =1;
    while (t!=0){
        printf("%d ",data[t]);
        t = right[t];
    }
    getchar();
    getchar();
    return 0;
}