#include<stdio.h>
int main() {
    char choice;

    do{
        printf("Playing game....\n");
        printf("Do you wnat to play again? (Y/N): ");
        scanf("%c",&choice);
        getchar();
    }while(choice=='Y');
}