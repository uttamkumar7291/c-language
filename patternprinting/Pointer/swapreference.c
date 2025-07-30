#include<stdio.h>
            //using pass by references
 void swap(int* x, int* y){
  int temp;
 temp = *x;
  *x = *y;
  *y = temp;
  return;
 }

int main(){
 int a;
  printf("enter a ");
  scanf("%d",&a);
  int b;
  printf("enter b ");
  scanf("%d",&b);
    
    
   swap(&a,&b);                           //    passsing addresses

    printf("the value of a is %d\n ",a);
     printf("the valu of b is %d ",b);
  return 0;
}