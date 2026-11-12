#include<stdio.h>
int main(){
    char op;
    int a,b,c;
    printf("enter two numbers",a,b);
    scanf("%d %d %d",&a,&b,&c);
    printf("enter operator",op);
    scanf(" %c",&op);
    switch(op)
    { 
      case'+':
      c=a+b;
      printf(" %d",c);
      break;
      case'-':
          c=a-b;
          printf(" %d",c);
          break;
      case'*':
       c=a*b;
       printf(" %d",c);
       break;
      case'/':
          c=a/b;
      printf(" %d",c);
      break;
      
      default:
      printf("wrong operator");
  }
          
    return 0;
}
