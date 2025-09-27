#include<stdio.h>
int main() {

    int bal = 3000;
    int ride =1;

    while(bal>=20) {
        bal-=20;
        printf("Ride %d completed. Reamining balance %d\n",ride, bal);
        
        ride++;
    }
}