#include<stdio.h>
  // using nested if statements:
int main(){
  int a,b,c; //question : 1 3 positive intergers input and print the greatest of them.
  printf("\nenter the first(a) number : ");
  scanf ("%d",&a);
  printf("\nenter the second(b) number : ");
  scanf ("%d",&b);
  printf("\nenter the third(c) number : ");
  scanf ("%d",&c);

  if(a>b&&a>c){
    printf(" \na is the greatest number than its three number ");
  }
  if(b>a&&b>c){
    printf(" \nb is the greatest number than its three number ");
  }
  if(c>a&&c>b){
    printf(" \nc is the greatest number than its three number ");
  }
  
//question:2 if the ages of ram, shayam, ajay are input through the keyborad, wap to determine the youngest of the three0

  printf("\n\nEnter the age of ram(a) number : ");
  scanf ("%d",&a);
  printf("\nEnter the age of shyam(b) number : ");
  scanf ("%d",&b);
  printf("\nEnter the age of ajay(c) number : ");
  scanf ("%d",&c);

  if(a>b&&a>c){
    printf(" \nRam is youngesr than its shayam and ajay ");
  }
  if(b>a&&b>c){
    printf(" \nShayam is youngest than its ram and ajay ");
  }
  if(c>a&&c>b){
    printf(" \n Ajay is the youngest yhan its ram and shayam ");
  }
 else{
  ("printf(\nAge of ram, shayam and ajay are eqals ");
  }

  return 0;
}