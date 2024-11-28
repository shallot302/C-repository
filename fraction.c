
#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a = n, b = m;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    printf("%d %d", n / a, m / a);
    return 0;
}