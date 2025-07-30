#include<stdio.h>
/*

1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
int main(){
  int n;
  printf("enter the no.of rows : ");
  scanf("%d",&n);
 int a = 1;
for(int i=1;i<=n;i++) //outer loops means->no of lines
// and inner loops ->no. of stars in each lines
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
  return 0;
}