#include<stdio.h>

int main()
{
  float p,c,m,h,e;   //by:er.uttam kumar
  //calculating percentahe of 5 subject:- 
 
  printf("number in physics :");
  scanf("%f",&p);
  printf("number in chemistry :");
  scanf("%f",&c);
  printf("number in mathematics :");
  scanf("%f",&m);
  printf("number in hindi :");
  scanf("%f",&h);
  printf("number in english :");
  scanf("%f",&e);

  float percentage=(p+c+m+h+e)/5;
  printf("total percentage of your subject :%f",percentage);

 return 0;
}
