#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int i = 5;
//     printf("%5d",i);//数字代表域宽
//     char ch = 'a';
//     printf("%5c",ch);
//     short a = 127;
//     printf("%5c",a);
//     printf("%s","CHINA");
//     double c =1.0;
//     printf("%f",c / 3);
//     printf("%20.15f\n",c/3);
//     printf("%-20.15f\n",c/3);
//     printf("%e\n",c/3);
//     printf("%13.2e\n",c/3);
//     printf("%o\n",-1);
//     printf("%x\n",-1);
//     printf("%g\n",c/3);
//     // char d = 'B',e = 'A',f = 'R';
//     int d = 66,e = 79,f = 89;//putchar函数也可以输出转换int类型的ASCII值
//     putchar(d);
//     putchar(e);
//     putchar(f);
    //getchar是输入字符的缩写，同时还可做空位停顿
    // char g,h,j;
    // g = getchar();
    // h = getchar();
    // j = getchar();
    // putchar(g);
    // putchar(h);
    // putchar(j);
    // putchar(getchar());
    // putchar(getchar());
    // putchar(getchar());
    // printf("%c",getchar());
//     char c1,c2;
//     c1 = getchar();
//     c2 = c1 + 32;
//     putchar(c2);
//
//
//     return 0;
//
// }



// int main()
// {
//     int n = 10;
//     double p = 1.0;
//     for(int i = 0;i<n;i++)
//     {
//         p = p *1.07;
//     }
//     printf("%lf",p);
//
//     return 0 ;
// }

// int main()
// {
//     int money =1000;
//     double _5year,_23year,_32year,_11111year = 1000,_huoqi =1000;
//     _5year = money *(1+ 5*0.03);
//     _23year =money * (1+ 2 * 0.021) *(1+3*0.0275);
//     _32year =money * (1+ 2 * 0.021) *(1+3*0.0275);
//     for(int i = 0;i<5;i++)
//     {
//         _11111year = _11111year * (1+0.015);
//     }
//     for(int i = 0;i<20;i++)
//     {
//         _huoqi = _huoqi * (1+0.0035);
//     }
//     printf("%lf\n%lf\n%lf\n%lf\n%lf\n",_5year,_23year,_32year,_11111year,_huoqi);
//     return 0 ;
// }


int main()
{
    double m;
    m = log(6000/(6000-300000*0.01))/log(1+0.01);
    printf("%.2lf",m);
    return 0;
}