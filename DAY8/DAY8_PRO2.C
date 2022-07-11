Write a program in C to sort an array using Pointer. The sample output must be as below
Algorithm:
step1:declear array and initilize some values.
step2:by using pointers,we store that array in that pointer.
step3:by using for loop  and we swap the elements.
step4:we sorting values 

#include <stdio.h>
int main()
{
    int arr[7]={25,58,6,32,98,7};
    int *ptr;
    int i,j,t;
    ptr=&arr;
    for(i=0;ptr[i];i++)
{
    for(j=i+1;ptr[j];j++)
    {
        if(ptr[i]>ptr[j])
        {
            t=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]);
}
    return 0;
}
