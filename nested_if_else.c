#include<stdio.h>
// nested if_else means : hints- if else ke andar if .........
int main()
{
     // question:-take positive interger input and tell if it is dividible by 5 or 3 but not divisible by 15
  int i;
  printf("Enter the number :");
  scanf("%d",&i);
  if( i%5==0 || i%3==0 && i%15!=0)
  {
    printf(" the number is divisible by 5 or 3 but not divisible by 15 :");
  }
  else{
    printf(" the number is not matching  the required condition :");
  }
  return 0;
}