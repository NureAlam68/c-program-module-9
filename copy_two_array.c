#include <stdio.h>
int main()
{   // input first array
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // input 2nd array
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i=0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[n+m]; // size 3rd array
    for(int i=0; i < n; i++) // copy 1st array
    {
        c[i] = a[i];
    }

    for(int i=0; i < m; i++) // copy 2nd array
    {
        c[i+n] = b[i];
    }

    for(int i=0; i < n+m; i++) // printing after copy
    {
        printf("%d ", c[i]);
    }
    return 0;
}