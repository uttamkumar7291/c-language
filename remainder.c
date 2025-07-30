#include<stdio.h>

int main(){
 float a,b;
  float q = a/b; //by:er.uttam kumar
  //find the remainder

  printf("enter the first number: ");
  scanf("%f",&a);
  printf("enter the second number: ");
  scanf("%f",&b);

 float remainder = a-(b*q);
  printf("remainder is : %d",remainder);

 return 0;
}