#include <stdio.h>
int main() {
  int a,b,c;
  printf("come come come\n");
  scanf("%d%d%d\n",&a,&b,&c);
  if(a>b && a>c){
      printf("a is bigger");
  }
  else if(b>a && b>c){
      printf("b is bigger");
  }
  else{
      printf("c is bigger");
  }
  
  
}
