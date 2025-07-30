/*#include<stdio.h>

int main(){
  int a;
  printf("enter a ");
  scanf("%d",&a);
  int b;
  printf("enter b ");                             BY : Er.uttam kumar
  scanf("%d",&b);
  int temp;
   temp = a;
   a = b;
   b = temp;
   // without using mathematics  a=a+b;   b=a-b;  a=a-b;
    printf("the value of a is %d\n ",a);
     printf("the valu of b is %d ",b);
  return 0;
}*/

#include<stdio.h>
                        //not swaping this number beacause no pass normal values (using always hint: **call by references)
 void swap(int a, int b){
  int temp;
   temp = a;
   a = b;
   b = temp;

  return;
 }

int main(){
 
 int a;
  printf("enter a ");
  scanf("%d",&a);
  int b;
  printf("enter b ");
  scanf("%d",&b);
   swap(a,b);   // always pass actual parameter
   // without using mathematics  a=a+b;   b=a-b;  a=a-b;
    printf("the value of a is %d\n ",a);
     printf("the valu of b is %d ",b);
  return 0;
}