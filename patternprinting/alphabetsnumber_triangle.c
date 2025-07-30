#include<stdio.h>

int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);
 // 1
 // A B
 // 1 2 3
 // A B C D
 // 1 2 3 4 5 no complete
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