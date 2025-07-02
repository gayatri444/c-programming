#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter sum of digit ");
    scanf("%d",&n);
    printf("enter a array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum += a[i];

    printf("Sum is : %d",sum);
    
    return 0;
}