#include<stdio.h>
int main()
{
    int n,i,a[50],mid,j,temp,flag,key,low,high;
    printf("enter the count number : ");
    scanf("%d",&n);
    printf("enter the count data %d:", n);
    for(i=0;i<n;i++)
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

    flag =0;
    low =0;
    high =n-1;
    mid=0;

    while(low<=high)
    {
        mid=(low+high)/2;
    if(a[mid]==key)
        {
            flag =1;
            break;
        }
    else if(a[mid]>key)
        high=mid-1;
    else
    low=mid+1;

    }
if(flag==1)
    printf("found");
else
    printf("not found");

    return 0;

}