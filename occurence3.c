#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fp;
    char data[100];
    int a[100],n,i,key,cnt=0, pos;

    fp = fopen("number.txt","r");

    printf("Enter a N  :");
    scanf("%d",&n);

    printf("enter a pos to insert(1 to %d):", n+1);
    scanf("%d", &pos);
    printf("enter the value to inser:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&a[i]);
        printf("%d",a[i]);

    }
    printf("\n Enter a Number for occurrence :");
     scanf("%d" ,&key);

    for (i=0;i>=pos;i--)
    a[i]=a[i-1];

 a[pos-1]=key;
 n++;

    {
        if(a[i]==key)
       
    n++;
    
    }
   
    printf("Array after insertion :\n");
    for(i=0;i<n;i++)
     printf("%d",a[i]);  

     return 0;
}