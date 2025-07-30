#include<stdio.h>
/*
     1
    121
   12321
  1234321
 123454321
12345654321*/
int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);
int nsp =n-1;
  for(int i=1;i<=n;i++){
     
    for(int q=1;q<=nsp;q++){//spaces ke liye loop
      printf(" ");
    }
    nsp = nsp-1;

     for(int j=1;j<=i;j++){ //number triangle ke liye
      printf("%d",j);
     }
    int a=i-1;
     for(int k=1;k<=i-1;k++){// extra cheez
       printf("%d",a);
       a--;
     }
    printf("\n");
  }
  return 0;

}