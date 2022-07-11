I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits
algorithm:
step1:we declear variable and assign some value and pos with intger data type.
step2:by this logic and n=n&~(1<<pos0)&~(1<<pos1)&~(1<<pos2).
step3:we will print n value.
#include <stdio.h>
int main() {
int n=0xff;    
int pos0=3;
int pos1=4;
int pos2=6;
n=n&~(1<<pos0)&~(1<<pos1)&~(1<<pos2);
printf("%x",n);
} 
