Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
Algorithm:
step1:declear variables
step2:by apply this logicb=a&(1<<0);
    c=a&(1<<1);
    e=a&(1<<7); we will get output.
#include <stdio.h>
Algorithm:
step1: declear variables.
step2:by appling this logic b=a&(1<<0);
    c=a&(1<<1);
    e=a&(1<<7);
step3: we will the output.
int main(){
    int b,c,e, a=0x55;
    b=a&(1<<0);
    c=a&(1<<1);
    e=a&(1<<7);
    printf("%d%d%d",b,c,e);
