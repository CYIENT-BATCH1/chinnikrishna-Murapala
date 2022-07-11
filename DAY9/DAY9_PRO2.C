Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”
Algorithm: 
step1:read the variables  assign some  values .
step2:by using if condition and also num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2).
step3:we will get output.
#include <stdio.h>
int main() 
{
  int num1,num2,pos=3,pos1=6,pos2=7;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
  if((48 & num1) == 48)
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);
      printf("%d",num2);
  }
  else
  printf(" not equal nothing"); 
}
