#include<stdio.h>

int main(){
  int a =5;
  int* x=&a; // int* ->  int ka address store karta hain 
  int** y=&x; //int** -> int* ka address store karta hain
      *x =7;
  printf("%p",a);
     printf("\n%p",*x);
      printf("\n%p",&x);
       printf("\n%p",y);

  return 0;
}