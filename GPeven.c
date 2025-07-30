#include<stdio.h>
//by er.uttam kumar

//AP with outmathematics formula
  int main(){
    int n;
    printf("enter the nuber :");
    scanf("%d",&n); 
    //AP=1,2,4,8,16.........arn-1 
    //WITHOUT MATHEMATICS
    int a=1;
     for(int i=1;i<=n;i++){      //by:er.uttam kumar
      printf("%d ",a);
      a= a*2;
     } 


    return 0;
  }