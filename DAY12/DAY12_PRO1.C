Find common elements in three sorted arrays, 3 array values are given as input to program.
Algorithm:
step1:declare arries and initilize group of elements to that arries.
step2:find the size of that arries.
step3:we declear i,j,k;
step4:By using whilel loop and if condition, we can print common elements.
 int main()
{
    int ar1[] = { 100,90,80,20,5,4};
    int ar2[] = { 80,54,20,7,5,4 };
    int ar3[] = { 100,80,20,5,4};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        }
        else if (ar1[i] > ar2[j])
            i++;
        else if (ar2[j] >ar3[k])
            j++;
        else
            k++;
    }

   printf("Common Elements are ");
    return 0;
}
