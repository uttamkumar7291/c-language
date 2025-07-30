#include<stdio.h>
// by:er.uttam kumar using 
int main(){

  int cp;
  printf("Enter the cost price : ");
  scanf("%f",&cp);
  int sp;
  printf("Enter the selling price : ");
  scanf("%f",&sp);
  int profit = sp - cp;
  int loss = cp - sp;

  if(sp>cp){
    printf("profit");
  }
  else{
    printf("loss");
  }
  return 0;
}