#include<stdio.h>
//Boolean : bool x = true than output is :1
//bool x = false than output is:0  
int main()
{ 
 int x=3,y,z;
 y = x = 10;
 z = x <= 10; // false output z=0

 printf("\n x=%d y=%d z=%d",x,y,z);

  return 0;
}