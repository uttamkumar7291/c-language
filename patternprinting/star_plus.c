#include<stdio.h>
/*
  *  
  *
*****
  *
  *  */
 // only for odd number apply 
int main(){
int n;
  printf("enter the number : ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++) //outer loops means->no of lines
// and inner loops ->no. of stars in each lines
  {
    for(int j=1;j<=n;j++)
    {
      int a = n/2+1;
      if(j==a || i==a) printf("*");
      else printf(" ");
    }
    printf("\n");
  }

  return 0;
}