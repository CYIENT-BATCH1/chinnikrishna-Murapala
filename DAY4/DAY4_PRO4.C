

  4) GIVEN NUMBER IS POWER OF 2 OR NOT
     #include <stdio.h>
      void main(){
       int n=30;
      ((n&n-1)==0) ? printf("2 power n") : printf("not 2 power n");
       }
(J)COMMA OPERATOR
#include <stdio.h>
void main(){
    int a=2,b=3,c,d;
    c=a,b;
    d=(a,b);
    printf("%d %d",c,d);
}

