#include<stdio.h>

   // make  a function which calculates  the  factorial  of  n using recursion.

 int factorial(int n){
  int fact = 1;
  for(int i=2;i<=n;i++){
    fact = fact*i;
  }
  return fact;
 }

int main(){
  int n;
  printf("enter a number :");
  scanf("%d",&n);

  int fact = factorial(n);
  printf("%d",fact);
  return 0;
}