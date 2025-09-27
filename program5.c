#include<stdio.h>
void calculateNprime(int);
int calaculateFactorial(int);
void calculateNfabonacci(int);
int reverse(int);
int main() {
    int choice, n,res ;

     
    while(6)
    {
        printf("\n========= MENU =========\n");
        printf("1. Calculate N prime Number\n");
        printf("2. Calaculate factorial of a number\n");
        printf("3. Calculate N term Fabonacci Series\n");
        printf("4. Reverse Digits of a number\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
            printf("Enter N: ");
            scanf("%d",&n);
             calculateNprime(n);
             break;

            case 2:
             printf("Enter a number\n");
             scanf("%d",&n);
             res = calaculateFactorial(n);
             printf("Factorial of %d is %d ",n,res);
             break;

            case 3:
             printf("Enter N: ");
             scanf("%d",&n);
             calculateNfabonacci(n);
             break;
             

            case 4:
             printf("Enter a number: ");
             scanf("%d",&n);
             res = reverse(n);
             printf("Reverse of %d: %d",n, res);
             break;

            case 5:
              printf("Exiting Program, GoodBye!\n");
              return 0;

            default:
             printf("Invalid Choice\n");
        }
    }

}

void calculateNprime(int x) {
 
    for(int i=2;i<=x;i++) {
        int count=0;
         for(int j=2;j<i;j++) {
            if(i%j ==0){
                count=1;
                break;
            }
         }
         if(count==0) {
            printf("%d ",i);
         }
    }

}

int calaculateFactorial(int x) {
int fact=1;
for(int i=1;i<=x;i++) {
    fact*=i;
}
return fact;

}

void calculateNfabonacci(int x) {

     int a=0,b=1,c;
     printf("%d %d ",a,b);
     for(int i=3;i<=x;i++) {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
     }
}

int reverse(int x) {
  
     int rem,rev=0;
     while(x!=0) {
       rem = x%10;
        rev = rev*10+rem;
        x/=10;
     }

     return rev;

}