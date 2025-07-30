#include<stdio.h>

int main(){ //question: given three points (x1,y1),(x2,y2)and(x3,y3),wap to cheak if all the three points fall on one straight line

  /*int x1,x2,x3,y1,y2,y3;

  printf("Enter the x1  number :");
  scanf("%d",&x1);
  printf ("Enter the x2  number :");
  scanf("%d",&x2);
  printf("Enter the x3  number :");
  scanf("%d",&x3);
  printf("Enter the y1  number :");
  scanf("%d",&y1);
  printf("Enter the y2 number :");
  scanf("%d",&y2);
  printf("Enter the y3  number :");
  scanf("%d",&y3);

  int m1 = (y2-y1)/(x2-x1);
  printf("m1=%d  ",m1);
  int m2  = (y3-y2)/(x3-x2);
  printf("\nm2=%d  ",m1); 
  
  if(m1=m2){
    printf("This point fall on one straight  : ");
  }
  else{
    printf("This point  not fall on one straight  : ");
  }
  return 0;
} */



//Ques : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz.(0,0). 
 int x,y;
 printf("Enter the cordinate(x,y) : ");
 scanf("%d %d",&x,&y);
  if(x==0 && y==0){
   printf("Lies at the origine ");
 }
 else if(y==0){ 
  printf("Lies on x-axis ");
 }
  else if(x==0){
  printf("Lies on y-axis ");
 }
 else{
    printf("not exist on x and y axises");
  }
 return 0;
}


