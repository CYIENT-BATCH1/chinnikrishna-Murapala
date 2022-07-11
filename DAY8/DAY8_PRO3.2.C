Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3
Algorithm:
step1:declear variable and assign value .
step2:declear variables x,i.
step3:by using for loop and this logic x=(n>>i)&1;
step4: we will get output. 
#include <stdio.h>
int main()
{
   int n=0xf3,x,i;
   for(i=2;i>=0;i--){
    x=(n>>i)&1;
   printf("%x",x);
   }
}
