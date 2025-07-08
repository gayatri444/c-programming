#include<stdio.h>
int main()
{
    
     int a[100],i,j,n,key,pos,value,found=0;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("enter data of count %d :",n);
    for (i = 0; i < n; i++)
     scanf("%d",&a[i]);
   
   
    printf("enter element for occurences :");
    scanf("%d",&key);
    
    printf("enter the search number :");
     scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            break;
        }
    }
     
    printf("not found");
    
   else
    printf("count is %d", cnt);
  
     return 0;

}