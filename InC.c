#include <stdio.h>

int main(){
  int x, y, ans;
  char op;
  printf("Enter expression(between 2 numbers)- ");
  scanf("%d %c %d", &x, &op, &y);
  switch (op){
    case '+':
     ans=x+y;
     printf("%d",ans);
     break;
    case '-':
     ans=x-y;
     printf("%d",ans);
     break;
    case 'x':
     ans=x*y;
     printf("%d",ans);
     break;
    case '/':
     ans=x/y;
     printf("%d",ans);
     break;
    default:
     printf("The operation asked cannot be processed");
  }
}