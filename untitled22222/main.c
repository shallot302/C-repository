// #include <stdio.h>
//
// int main(void)
// {
//     printf("C");
//     return 0;
// }


// #include <stdio.h>
// #define Mul(x,y) ++x*++y//++a+b*++b+c == 2+3*3+3 == 14
// int main() {
//     int a = 1;
//     int b = 2;
//     int c = 3;
//     printf("%d",Mul(a+b,b+c));
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[3][2] = {1,2,3,4,5,6},*p[3];
//     p[0] = a[1];
//     printf("%d",*(p[0] + 1));
// }
// #include <stdio.h>
// int main() {
//     int a = 5,b = 4,c = 6,d;
//     printf("%d\n",d = a > b ?(a > c ? a : c) : (b));
//     return 0;
// }
#include <stdio.h>
// int main() {
//     int i = 43;
//     printf("%d",printf("%d",printf("%d",i)));
//     return 0;
// }//printf函数返回值为位数



int main()
{
    int x = 3;
    switch(x)
    {
    case 1: {
            printf("%d",x++);
            printf("-%d",++x);
    }
    case 2: {
            printf("%d",++x);
            printf("+%d",x*x);
            break;
    }
    case 3: {
            for(x--;x<5;++x) {
                printf("!");
                x++;
            }
    }
    case 4: printf("!");
    default: printf("!!");
    }
}