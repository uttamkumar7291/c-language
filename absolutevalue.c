#include<stdio.h>

int main(){
  int n;  // ques :-take interger input and print the absolute value of that interger.

  printf(" enter the number : ");
  scanf("%d",&n);
  if(n<0)
  {
  n = n* (-1);
  }
  printf(" The absolute valu is : %d",n);

  return 0;

}