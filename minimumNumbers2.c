#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("minimum is %d",a,b);
else
printf("minimum is %d",(a>b)?a:b);
return 0;
}