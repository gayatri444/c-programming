#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter a two number");
    scanf("%d%d",&a,&b);
    printf("\n Addition");
    printf("\n Subtraction");
    printf("\n Multiplication");
    printf("\n Division");
    printf("enter a choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("Addition %d",(a+b));
                break;
        case 2 : printf("subtraction %d",(a-b));
                break;
        case 3 : printf("Multiplication %d",(a*b));
                break;
        case 4 : printf("Division %d",(a/b));
                break;  
       
       default : printf("Invalid choice");
    }          
return 0;
}