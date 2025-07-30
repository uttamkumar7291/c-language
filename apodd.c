
 #include<stdio.h>
//by:er.uttam kumar
int main(){
  int n;
    printf("Enter the nuber :");
    scanf("%d",&n);                  //AP={1,3,5,7.........an}
  for(int i=1;i<=2*n-1;i=i+2){            //a=1 , d=2 and    an=a+(n-1)d  
    printf("%d ",i);                                         //=1+(n-1)2 =an= (2n-1)
   }                                          
 return 0; 
}/*
//AP without mathematics formula
  int main(){
    int n;
    printf("enter the nuber :");
    scanf("%d",&n);  
    int a=1;
     for(int i=1;i<=n;i++){
      printf("%d ",a);
      a= a+2;
     } 


    return 0;
  }*/ 