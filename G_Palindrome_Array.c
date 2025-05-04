// Given a number N
//  and an array A
//  of N
//  numbers. Determine if it's palindrome or not.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n - 1;
    int is_palindrome = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (is_palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}