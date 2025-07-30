#include<stdio.h>

int main (){
  int n; // question:-1 take interger input and tell if it is at three digit number or not.
  printf("enter the number : "); //by: er. uttam kumar
  scanf("%d",&n);

  if(n>99&&n<=999){  
    printf(" the number is three digite : ");
  }
  else{
    printf(" the number is not three digite :");
  }

  // question:-2 take interger input and tell if it is divisible by 5 or 3.

 // int n;
  //printf("enter the number : "); //by: er. uttam kumar
  //scanf("%d",&n);
 if(n%5==0&&n%3==0)
 {
    printf("\nthe number is divisible by 5 and 3 : ");
  }
  else
  {
    printf("\n the number is  not divisible by 5 and 3 : ");
  }


  
  return 0;
}