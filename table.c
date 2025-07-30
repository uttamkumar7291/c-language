#include<stdio.h>
/*
int main(){
  for(int i=19;i<=190;i=i+19){
    printf("%d\n",i);
  }
  return 0;
}*/
int main(){
  int n;
  printf("Enter the table :");
  scanf("%d",&n);
  for(int i=n;i<=n*10;i=i+n){
    printf("%d\n",i);
  }      //by:er.uttam kumar
  return 0;
}

