#include<stdio.h>

int main()
{
  int day;
  printf("enter the number:");
  scanf("%d",&day);
  switch(day)
  {
   case 1:
    printf("RED F0R STOP");
    break;
    case 2:
    printf("yellow for slow");
    break;
    case 3:
    printf("green for go");
    break;
    default:
    printf("NO traffic rule BECAREFULL");
    break;

  }            //by:er.uttam kumar
  return 0;
}