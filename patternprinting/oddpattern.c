#include<stdio.h>

int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);
   //odd number 
  int a = 1;
  for(int i=1;i<=n;i++){
   
     for(int j=1;j<=i;j++){
      printf("%d",a);
      a = a+2;
     }
    printf("\n");
  }
  return 0;
}