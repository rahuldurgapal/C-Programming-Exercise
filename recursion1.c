#include <stdio.h>

int fun(int n) {
    if(n <= 1) return n;
    return fun(n-1) + fun(n-3);
}

int main() {
    printf("%d", fun(7));
    return 0;
}
