Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)
 How Selection sort works is explained below.

Alorithm:
step1:declear variables
step2:we call function from main function to above function
step3:by using for loop and if condtion we swap numbers.
#include<stdio.h>
void sortelement(int arr[], int n)
{
    int i,j;
    if(n>0)
    {int i,j,t;
     for(i=0;arr[i];i++)
    {
    for(j=i+1;arr[j];j++)
    {
        if(arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    }
}
}
int main()
{
    int n=5,j;
    int arr[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    sortelement(arr,n);
    printf("After sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)
     printf("%d ", arr[i]);
    return 0;
}

