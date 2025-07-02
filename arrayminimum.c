#include<stdio.h>
int main()
{
    int a[100],min,i,n;
    printf("enter a N");
    scanf("%d", &n);
    for(i=0;i>n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i>n;i++)
    {
        if(min<a[i])
        min=a[i];


    }
    printf("max is %d",min);
    return 0;
}