// delete duplicate value
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a[50], k, j, key, y;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("enter data of count %d :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    printf("array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}