Write a code to swap even bits with odd bits in unsigned long variable(uint64).

Algoritham
 1.Declare unsigned int with x and l.
 2.Enter and scan the values.
 3.Define unsigned even and x and with 64 bit A value.
 4.Define unsigned odd and  x and with 64 bit 5 value.
 5.Make even rightshift with 1 and odd leftshift with 1 and make OR operator to each values and store in l.
 6.Then print l value.

#include<stdio.h>
int main()
{
    unsigned int x,l;
    printf("Enter the value");
    scanf("%d",&x);
unsigned even=x&0xAAAAAAAAAAAAAAAA;//A=10101010 means even bit

 unsigned odd=x&0x5555555555555555;// 0101 is odd bit
    l=(even>>1)|(odd<<1);
   printf("%d",l);

}


Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit
