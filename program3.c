#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);

    if(marks>=90) {
        printf("Grade A: \n");
    }
  if(marks>=75 && marks<90) {

        printf("Grade B\n");

    }
    if(marks>=60 && marks<75) {
        printf("Grade C");
    }

      if(marks>=35 && marks<60) {
        printf("Grade D");
    } 
     if(marks<35){
        printf("Fail");
     }

     int a=86,b=96;
     int c = (a>b) ? a : b;
     printf("max vlaue is %d",c);
}