
//addition of two number using pointe 
#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter a 2 Number:");
    scanf("%d%d",&a,&b);
    printf("addition is %d",*p + *q);
    return 0;
}