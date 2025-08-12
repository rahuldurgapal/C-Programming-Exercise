#include<stdio.h>
int main() {

  int day;
  printf("Enter the day (1-7)\n");
  scanf("%d",&day);

  switch(day) {
    case 1:
     printf("Sunday\n");
     break;

    case 2:
     printf("Monday\n");
     break;

    case 3:
    printf("TUesday\n");
    break;

   case 4:
   printf("WEdnesday\n");
   break;

  case 5:
   printf("Thursday\n");
   break;

  case 6:
   printf("Friday\n");
   break;

  case 7:
   printf("saturday\n");
   break;

  default:
   printf("Invalid day number selected");
   
  }
}