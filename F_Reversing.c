// Given a number N and an array A of N numbers. Print the array in a reversed order.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // reverse array
    int i=0;
    int j=n-1;
    while(i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
    // print reverse array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}