#include<stdio.h>
 #include<string.h>
/*
 int main (){
  char arr[5]={'u','t','t','a','m'  };
     printf("%c",arr[0]);
       printf("%c",arr[1]);
       printf("%c",arr[2]);
       printf("%c",arr[3]);
        printf("%c\n",arr[4]);
        //  char address ke liye
        printf("%p\n",&arr[0]);
         printf("%p\n",&arr[1]);
          printf("%p",&arr[2]);

  return 0;
 }*/

/*
int main(){
  char ch ='A';
  //printf("%d",ch);
 int x = (int)ch;
 printf("%d",x);
  return 0;
}
*/
/*
int main(){
  char arr[]={'a','b','c','d'};
  for(int i=0;i<=4;i++){
  printf("%c\n",arr[i]); // print characters
   printf("%d\n",&arr[i]); //address of characters
    printf("%d\n",arr[i]); //ascii valu of characters
   }
  return 0;
}
*/
/*
int main(){
  char arr[]={'u','t','t','a','m','\0'};
  int i=0;
  while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
  }
  return 0;
}*/

int main (){
  char str[]=" mr.uttam singh \0";
//  int i=0;
//  while(str[i]!='\0')
 // {
     //printf("%c",str[i]);
   // printf("%c",i[str]);
   // printf("%c",*(i+str));
   // printf("%c",*(str+i));
    printf("%s\n",str);
   // i++;
  //}
  return 0;
}
 