
#include<stdio.h>
 // only for odd number apply 
int main(){
int n;
  printf("enter the number of rows : ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++) //outer loops means->no of lines
// and inner loops ->no. of stars in each lines
  {
    for(int j=1;j<=n;j++)
    {
      
      if(i==j || i+j==n+1) printf("*");
      else printf(" ");
    }
    printf("\n");
  }

  return 0;
}