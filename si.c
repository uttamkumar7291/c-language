#include<stdio.h>
 
 int main()
 {
  int p,r,t;

  printf("enter the principle :");
  scanf("%d",&p);
   printf("enter the rat  :");
    scanf("%d",&r);              
    printf("enter the time  :");  //by:er.uttam kumar
     scanf("%d",&t);

 int si=p*r*t/100;
   printf("simple interest is : %d",si);

  return 0;
 }
