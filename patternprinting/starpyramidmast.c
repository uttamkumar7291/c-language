#include<stdio.h>
 
int main(){
int n;
  printf("enter the number of lines : ");
  scanf("%d",&n);
  int nst =n;
  int nsp=1;
  for(int i=1;i<=2*n+1;i++){ //pehali line
    printf("*");
  } 
  printf("\n");
  for(int i=1;i<=n;i++) 
  {
    for(int j=1;j<=nst;j++){ //for star
    printf("*");
    }
    for(int k=1;k<=nsp;k++){//for speces
      printf(" ");
    }
    for(int j=1;j<=nst;j++){ //for star
    printf("*");
    }
    nst--;
    nsp+=2;
    printf("\n");
  }

  return 0;
}