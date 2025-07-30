#include<stdio.h>
/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/
int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
      printf("%d ",j);
     }
    printf("\n");
  }
  return 0;
}