// #include <stdio.h>
// int main()
// {
//     int x,y;
//     char c;
//     scanf("%d%d %c",&x,&y,&c);
//
//     int ans;
//     if(c == '+')
//     {
//         ans = x + y;
//         printf("%d",ans);
//     }
//     else if(c == '-')
//     {
//         ans =x - y ;
//         printf("%d",ans);
//     }
//     else if(c == '*')
//     {
//         ans = x*y;
//         printf("%d",ans);
//     }
//     else if(c=='/')
//     {
//         if(y == 0)
//         {
//             printf("Divided by zero!");
//         }
//         else
//         {
//             ans = x/y;
//             printf("%d",ans);
//         }
//     }
//     else
//     {
//         printf("Invalid operator!");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double a,b,c;
//     scanf("%lf%lf%lf",&a,&b,&c);
//     double x1,x2;
//     double delta = b*b-4*a*c;
//     x1 =(-b+sqrt(delta))/(2*a)*1.0;
//     x2 =(-b-sqrt(delta))/(2*a)*1.0;
//     if(delta == 0)
//     {
//         printf("x1=x2=%.5lf",x1);
//     }
//     else if(delta > 0)
//     {
//         if(x1 > x2)
//         {
//             printf("x1=%.5lf;x2=%.5lf",x2,x1);
//         }
//         else if(x1 < x2)
//         {
//             printf("x1=%.5lf;x2=%.5lf",x1,x2);
//         }
//     }
//     else
//     {
//         printf("No answer!");
//     }
//
//
//     return 0;
// }

