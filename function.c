#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    int x = 2, y = 3, z = 4;
    int ans = mul(add(x++, y), sub(z, ++x));
    printf("%d %d %d %d\n", ans, x, y, z);
    return 0;
}
