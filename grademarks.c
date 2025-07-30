#include<stdio.h>

int main ()
{
  int n;// question: take input percentage of a student and print the grade according to marks
  printf("Enter rhe number : ");
  scanf("%d",&n);

  if(n>91 && n<=100){
    printf("\nExcellent🥇🥇🥇 : ");
  }
    if (n>81 && n<=90)
    {
      printf("\nvery good👍 : ");
    } 
     if(n>71 && n<=80)
      {
        printf("\ngood💕 : ");
      } 
        if(n>61 && n<=70){
          printf("\ncan do better😘 : ");
        }
         if(n>51 && n<=60){
          printf("\naverage : ");
         }
         if(n>41 && n<=50){
          printf("\nBelow average : ");
         }
          if(n<40)
          {
            printf("\n 😂Fail😍 : ");
          }

  return 0;
}