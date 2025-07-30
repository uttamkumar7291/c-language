/*#include<stdio.h>
                                //prototypes means function moving any where.......
int main(){
  void fun();
  fun();
  return 0;
}
void fun(){
  printf("hello uttam :");
  return;
 }*/
#include<stdio.h>
 
void australia(){
  printf("you are in australia\n");
  void england();         
  england();
  return;
  }

void england(){
 printf("you are in england\n");
  return;

}

int main(){
 void india();
  india();//calling india
  return 0;
}
void india(){
printf("you are in india\n");
void australia();
australia();
return;

}