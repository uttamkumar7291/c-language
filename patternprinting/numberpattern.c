
 #include<stdio.h>
/*
1234567
123 567
12   67
1     7*/
int main(){
int n;
  printf("enter the number of lines : ");
  scanf("%d",&n);
  int nst =n;
  int nsp=1;
  for(int i=1;i<=2*n+1;i++){ //pehali line
    printf("%d",i);
  } 
  printf("\n");
  
  for(int j=1;j<=n;j++) 
  {
    int a=1;
    for(int k=1;k<=nst;k++){ //for star
   printf("%d",a);
    a++;
    }
   
    for(int l=1;l<=nsp;l++){//for speces
      printf(" ");
       a++;
    }
   
    for(int m=1;m<=nst;m++){ //for star
    printf("%d",a);
      a++;
    }
  
    nst--;
    nsp+=2;
    printf("\n");
  }

  return 0;
}
  
