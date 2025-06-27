#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;
    printf("Enter Number:");
    scanf("%d",&n );
    flag=1;
    for(i=2; i<= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            flag=0;
            break;
        }
   
    }
    if(flag==1)
    printf("enter prime number");
else
    printf("enter not prime number");
    return 0;

}
