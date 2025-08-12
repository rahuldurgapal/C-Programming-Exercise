#include<stdio.h>
int main() {

    int marks, totalMarks=0, count=0;
    float average;

    while(1) {
        printf("Enter the marks for student %d (-1 to stop) ",count+1);
        scanf("%d",&marks);

        if(marks==-1)
         break;

        if(marks<0 || marks>100) {
            printf("Invalid marks! Please enter a value between 0 to 100\nn");
            continue;
        }

        totalMarks+=marks;
        count++;
          
        (marks>=40) ? printf("Result: Pass\n") : printf("Result: Fail\n");

        switch(marks/10) {
            case 10:
            case 9:
              printf("Grade: A\n\n");
              break;

            case 8:
              printf("Grade: B\n\n");
              break;

            case 7:
              printf("Grade: C\n\n");
              break;

            case 6:
              printf("Grade: D\n\n");
              break;

            case 5:
            case 4:
              printf("Grade: E\n\n");
              break;

            default:
              printf("Grade:  F\n\n");
        }
    }
    if(count>0) {
            average = (float)totalMarks/count;
            printf("\n Total Students: %d\n",count);
            printf("Average Marks: %f\n",average);
        } else {
            printf("\nNo valid Student marks were entered. \n");
        }

        return 0;

}