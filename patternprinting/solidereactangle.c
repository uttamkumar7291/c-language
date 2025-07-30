#include<stdio.h>

int main(){
  /*int n;
  printf("enter the number : ");
  scanf("%d",&n);
  //*******....up to n number of stars
for(int i=1;i<=3;i++)
  {
    for(int i=1;i<=n;i++)
    printf("*");
  }
  
for(int i=1;i<=n;i++) //outer loops means->no of lines
// and inner loops ->no. of stars in each lines
  {
    for(int i=1;i<=n;i++)
    {
      printf("*");
    }
    printf("\n");
  }*/ 
 int n;
 printf("enter the number of rows :");
 scanf("%d",&n);
 int m;
 printf("enter the number of columns :");
 scanf("%d",&m);


  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      printf("*");
    }
   printf("\n");
  }
  return 0;
}