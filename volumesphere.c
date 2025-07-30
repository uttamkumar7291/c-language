#include<stdio.h>

int main()
{
  float pi,r;
  pi=3.14;

  printf("enter the redius :");
  scanf("%f",&r);
  
  //by:er.uttam kumar
 // find volume of sphere
  float v=4*pi*r*r*r/3;
  printf("volume of sphere is :%f",v);

  return 0;
}