#include<stdio.h>
/*
void greet(){
  printf("good morning\n");
  printf("how are you\n");
  return;
}

int main(){
  greet();
  greet();
  greet();
  return 0;
}*/
void england(){
 printf("you are in england\n");
  return;

}
void australia(){
  printf("you are in australia\n");
  england();
  return;
}

void india(){
printf("you are in india\n");
australia();
return;

}
#include<stdio.h>

int main(){
  india();//calling india
  return 0;
}