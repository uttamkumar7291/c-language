#include<stdio.h>

int main(){  //by:er.uttam kumar
  int n;
  printf("Enter the number :");
  scanf("%d",&n);

 /*int a=100;//Ap:100,97,94,......
   for(int i=1;a>0;i++){
    printf("%d\n",a);
    a=a-3;
   }
  return 0;*/

/*GP DEACRESING ORDER now given 
    Gp :100,50,25.........an*/

   float a=100;
   for(float i=1;i<=n;i++){
    printf("%f\n",a);
    a=a*1/2;
   }
  return 0;
}