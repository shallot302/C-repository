// #include <stdio.h>
// int main()
// {
//     double C = 0,F = 0;
//     scanf("%lf",&F);
//     C=5*(F-32)/9;
//     printf("%.5lf",C);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double r;
//     scanf("%lf",&r);
//     printf("%.4lf %.4lf %.4lf",2*r,3.14159*2*r,3.14159*r*r);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double r1 = 0,r2 = 0;
//     scanf("%lf%lf",&r1,&r2);
//     printf("%.2lf",1/(1/r1+1/r2));
//     return 0;
// }

// #include <stdio.h>
// #include <cmath>
// int main()
// {
//     long long x;
//     scanf("%lld",&x);
//     printf("%.0lf\n",(double)floor(x));
//
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char C;
//     scanf("%c",&C);
//     printf("%d",(int)C);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     scanf("%d",&i);
//     printf("%c",(char)i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     long long i = 0;
//     scanf("%ld",&i);
//     if(i == 0)
//     {
//         printf("%d",0);
//     }
//     else
//     {
//         printf("%d",1);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0,b = 0,c = 0,d = 0,f = 0,s = 0;
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
//     s = s + (a%3);a = a/3;b = b+a;f = f+a;
//     s = s + (b%3);b = b/3;c = c+b;a = a+b;
//     s = s + (c%3);c = c/3;b = c+b;d = d+c;
//     s = s + (d%3);d = d/3;c = c+d;f = f+d;
//     s = s + (f%3);f = f/3;d = d+f;a = a+f;
//     printf("%d %d %d %d %d\n",a,b,c,d,f);
//     printf("%d",s);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float a;
//     scanf("%f",&a);
//     printf("%.3f",a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double a;
//     scanf("%lf",&a);
//     printf("%.12lf",a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a;
//     int b;
//     float c;
//     double d;
//     scanf("%c%d%f%lf",&a,&b,&c,&d);
//     printf("%c %d %.6f %.6lf",a,b,c,d);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double a;
//     scanf("%lf",&a);
//     printf("%lf\n",a);
//     printf("%.5lf\n",a);
//     printf("%e\n",a);
//     printf("%g\n",a);
//     return 0 ;
// }

// #include <stdio.h>
// int main()
// {
//     char a = '*';
//     printf("  %c\n %c%c%c\n%c%c%c%c%c\n %c%c%c\n  %c",a,a,a,a,a,a,a,a,a,a,a,a,a);
//     return 0;
//
// }

// #include <stdio.h>
// int main()
// {
//     double a, b;
//     scanf("%lf%lf",&a,&b);
//     int x;
//     x = a/b;
//     printf("%.6lf",a - x * b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double r,V;
//     scanf("%lf",&r);
//     V=4.0/3*3.14*r*r*r;
//     printf("%.5lf",V);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a,b,c;
//     scanf("%c%c%c", &a, &b, &c);
//     printf("%c%c%c",c,b,a);
//
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int h,r,a;
//     scanf("%d%d",&h,&r);
//     double V;
//     V=h*3.14*r*r*1.0;
//     a = 20000/V;
//     if(a!=20000/V) a++;
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
// #include <cmath>
// int main()
// {
//     double Xa,Ya,Xb,Yb;
//     scanf("%lf%lf%lf%lf",&Xa,&Ya,&Xb,&Yb);
//     printf("%.3lf",sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb)));
//     return 0;
// }
