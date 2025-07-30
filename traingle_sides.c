#include<stdio.h>

int main(){
  int a,b,c; //question:-take three numbers inpute and tell if they can be the sides of a triangle.

  printf("enter the trangle first(a) side : "); //by: er. uttam kumar
  scanf("%d",&a);
  printf("\nenter the second(b) side : "); //by: er. uttam kumar
  scanf("%d",&b);
  printf("\nenter the third(c) side : "); //by: er. uttam kumar
  scanf("%d",&c);
  if(a+b>c&&b+c>a&&a+c>b){
    printf("\nThey can be side of trangle ");
  }
  else{
    printf("\nthey can not be side of traingle ");
  }

  return 0;
}