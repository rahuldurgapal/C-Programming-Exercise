#include<stdio.h>
void printPrimeNumbers(int);
int calculateFactorial(int);
void printFabonacci(int);
int calculateSum(int);
int main() {

    int n, choice,res;

    while(4) {

        printf("\n =======Menu=======\n");
        printf("1. Calculate N prime Numbers\n");
        printf("2. Calculate Factorial of a number\n");
        printf("3. Calcualte N term Fibonacci Series\n");
        printf("4. Calculate Sum of digits of a number\n");
        printf("5. Exit\n\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
             printf("Enter N: ");
             scanf("%d",&n);
             printPrimeNumbers(n);
             break;

            case 2:
             printf("Enter  a number: ");
             scanf("%d",&n);
             res = calculateFactorial(n);
             printf("Factorial of %d : %d",n,res);
             break;

            case 3:
             printf("Enter N: ");
             scanf("%d",&n);
             printFabonacci(n);
             break;

            case 4:
             printf("Enter a number: ");
             scanf("%d",&n);
             res = calculateSum(n);
             printf("Sum of %d is %d",n,res);
             break;

            case 5:
            printf("Program Exiting, GoodBye");
             return 0;

            default:
             printf("Invalid choice\n");
        }

    }
}

void printPrimeNumbers(int n) {
 
     if(n<=1){
        printf("No prime Number found between the given number\n");
        return;
     }

     for(int i=2;i<=n;i++) 
     {
        int count=0;
         for(int j=2;j<i;j++) {
            if(i%j==0){
                count=1;
                break;
            }
         }
         if(count==0)
          printf("%d ",i);
         
     }
}

int calculateFactorial(int n) {

     int fact=1;
     for(int i=1;i<=n;i++) {
        fact*=i;
     }
     return fact;
}

void printFabonacci(int n) {
    
    if(n==0 || n==1){
     printf("%d",n);
        return;
    }

    int x=0,y=1,z;
    for(int i=1;i<=n;i++) {
        printf("%d ",x);
        z=x+y;
        x=y;
        y=z;
    }
}

int calculateSum(int n) {

    int rem,sum=0;
    while(n!=0) {
        rem= n%10;
        sum+=rem;
        n/=10;
    }
    return sum;

}