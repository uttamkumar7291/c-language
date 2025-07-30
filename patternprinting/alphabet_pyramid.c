#include<stdio.h>
  /*     A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
    ABCDEFEDCBA
   ABCDEFGFEDCBA
  ABCDEFGHGFEDCBA
 ABCDEFGHIHGFEDCBA
ABCDEFGHIJIHGFEDCBA*/
int main(){
  int n;
  printf("Enter the no. of rows : ");
  scanf("%d",&n);
int nsp =n-1;
  for(int i=1;i<=n;i++){                                                      
 
     
    for(int q=1;q<=nsp;q++){//spaces ke liye loop
      printf(" ");
    }
    nsp = nsp-1;

     for(int j=1;j<=i;j++){ //number triangle ke liye
     char ch =(char)(j+64);
      printf("%c",ch);
     }
    int a=i-1;
     for(int k=1;k<=i-1;k++){// extra cheez
     char ch=(char)(a+64);
       printf("%c",ch);
       a--;
     }
    printf("\n");
  }
  return 0;

}