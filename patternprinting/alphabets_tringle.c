#include<stdio.h>  
/*
A
A B
A B C
A B C D
A B C D E*/

int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    int a = 1;
     for(int j=1;j<=i;j++){
      int d =a+64; //d=65
      char ch = (char)d;//ch = (char)65-> 'A'
      printf("%c ",ch);
      a++;
     }
    printf("\n");
  }
  return 0;
}