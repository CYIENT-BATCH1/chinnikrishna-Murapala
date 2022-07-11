3.1.Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
Algorithm:
step1:declare variable and assign value.
step2:we take postion.
step3:by using this logic  we will get n=n|(1<<pos)|(1<<pos1);
step4:we will get output.
#include<stdio.h>
int main(){
    int n=0xfa;
    int pos=3;
    int pos1=7;
    n=n|(1<<pos)|(1<<pos1);
    printf("%x",n);
}
