// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double x1,y1,x2,y2,x3,y3;
//     double a,b,c,p,S;
//     scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
//     a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//     b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
//     c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
//     p = (a+b+c)/2.0;
//     S = sqrt(p*(p-a)*(p-b)*(p-c));
//     printf("%.2lf",S);
//     return 0;
// }

// #include <stdio.h>
//
// int main()
// {
//     int an,a1,a2,d,n;
//     scanf("%d%d%d",&a1,&a2,&n);
//     d = a2-a1;
//     an = a1 + (n-1)*d;
//     printf("%d",an);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     long long  A,B;
//     scanf("%lld%lld",&A,&B);
//     printf("%lld",A*B);
//
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",1<<n);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     long long N;
//     scanf("%lld",&N);
//     if(N < 0)
//     {
//         printf("negative");
//     }
//     else if(N == 0)
//     {
//         printf("zero");
//     }
//     else
//     {
//         printf("positive");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     double n = 0;
//     scanf("%lf",&n);
//     if(n<0)
//     {
//         n = -n;
//     }
//     printf("%.2lf",n);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2 == 0)
//     {
//         printf("even");
//     }else
//     {
//         printf("odd");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);
//     int a = (int)c;
//     if(a%2 == 0)
//     {
//         printf("NO");
//     }else
//     {
//         printf("YES");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     long long x,y;
//     scanf("%lld%lld",&x,&y);
//     if(x>y)
//     {
//         printf(">");
//     }if(x==y)
//     {
//         printf("=");
//     }if(x<y)
//     {
//         printf("<");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int q;
//     scanf("%d",&q);
//     if(q>=10&&q<100)
//     {
//         printf("1");
//     }else
//     {
//         printf("0");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     long long xy,gl;
//     scanf("%lld%lld",&xy,&gl);
//     if(xy>10)
//     {
//         printf("1");
//     }else if(gl>20)
//     {
//         printf("1");
//     }
//     else
//     {
//         printf("0");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     long long n;
//     scanf("%lld",&n);
//     if(n%3 == 0&&n%5 == 0)
//     {
//         printf("YES");
//     }else
//     {
//         printf("NO");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     if(x%3 == 0&&x%5 == 0&&x%7 == 0)
//     {
//         printf("3 5 7");
//     }else if(x%3 == 0&&x%5 == 0)
//     {
//         printf("3 5");
//     }else if(x%3 == 0&&x%7 == 0)
//     {
//         printf("3 7");
//     }else if(x%5 == 0&&x%7 == 0)
//     {
//         printf("5 7");
//     }
//     else if(x%3 == 0)
//     {
//         printf("3");
//     }
//     else if(x%5 == 0)
//     {
//         printf("5");
//     }
//     else if(x%7 == 0)
//     {
//         printf("7");
//     }
//     else
//     {
//         printf("n");
//     }
//     return 0;
// }
