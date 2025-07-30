#include<stdio.h>


// write a function to computer the greatest common divisior of two given number

int min(int a, int b){
  if(a>b) return a;
  else return b;
}
int gcd(int a, int b){
  int hcf;
  for(int i=min(a,b);i>=1;i--){
     if(a%i==0 && b%i==0){
      hcf = i;
      break;
     }
  }
return hcf;
}

int main (){
  int a;
  printf("enter the the first number :");
  scanf("%d",&a);
  int b;
  printf("enter the second number :");
  scanf("%d",&b);

int hcf = gcd(a,b);
printf("the hcf/gcd of %d and %d is :%d",a,b,hcf);


  return 0;
}