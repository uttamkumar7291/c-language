#include<stdio.h>
                                   
int main()   //question:-given the length and breadth of a reactangle wap to find whether the area of          the reactangle is greater than its parimeter.
{
  int l,b;                  //by:er.uttam kumar

 printf("enter the length of reactangle :");
 scanf("%d",&l);
 printf("enter the brith of reactangle :");
 scanf("%d",&b);

 int perimeter = 2*(l+b);
 int area = l*b;

 printf("area of ractangle is : %d\n",area);
 printf("perimeter of reactangle is : %d\n",perimeter);
 if(area>perimeter){
  printf("area of reactangle is greater than its perimeter  ");
 }
 else{
  printf("area of reactangle is less than its perimeter  ");
 }
  return 0;
}