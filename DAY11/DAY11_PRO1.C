Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. (Make number of elements as configurable value)
    How binary search works is explained below.

Algorithm:
step1:take an array with group of elements with int data type
step2:find the size of the array
step3:declare avariable x and initilize a value of that variable.
step4:we call the funtion from main function to above function.
step5:by using l and h, to find mid value .
step6: that mid value is equal to x that return value to the main function.
step7:if mid value is less than the x value mid value increasre +1.
step8:if mid value is greater than then the x value mid value-1. 
step9:return 0 means nothing will return to the main function.
 
#include<stdio.h>
 int binarySearch(int array[], int x, int l, int h) {
  // Repeat until the pointers low and high meet each other
  while(l<=h) {
    int mid=(h+l)/2;
    if(array[md]==x)
      return md;
    if(array[md]<x)
      l=md+1;
      else
      h=md-1;
  }
  return 0;
}
int main(void) {
  int array[]={3,4,5,6,7,8,9};
  int n=sizeof(array)/sizeof(array[0]);
  int x=4;
  int result=binarySearch(array,x,0,n-1);
   printf("Element is found at index %d", result);
  return 0;
}
