#include<stdio.h>
int main() {

int n = 5;

if (--n >= 5)
    printf("A ");
else if (n++ == 5)
    printf("B ");
else
    printf("C ");

printf("%d", n);





}

