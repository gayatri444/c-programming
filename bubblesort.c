#include <stdio.h>
int main()
{
    int n, i, a[50],j ,temp;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("enter data of count %d :",n);
    for (i = 0; i < n; i++)
     scanf("%d",&a[i]);
    for(j=0;j<n-1-i;j++)
    scanf("%d", &temp);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorting array is :");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }

    return 0;
}