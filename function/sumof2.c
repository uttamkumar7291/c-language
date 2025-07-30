#include<stdio.h>
#include<math.h>

 int add(int x, int y){       //   arguments
  return x+y;
 }
 
int main(){
  int a;int b;
  printf("enter 1st number :\n");
  scanf("%d",&a);
  printf("enter 2nd number ;\n");
  scanf("%d",&b);

   int sum=add(a,b); // a and b  is formal parameters   AND a ,b value is actual parameters
   printf("total sum is :%d",sum);

  return 0;
}