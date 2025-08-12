#include<stdio.h>
int main() {
    int balance = 3000;
    int ride =1;

    while(balance>=20) {
        printf("Ride %d completed. Remaning balance %d\n",ride, balance);
        balance-=20;
        ride++;
    }
}