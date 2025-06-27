#include<stdio.h>
int main()
{
    int h, m,s;
    printf("enter a time is valid or not");
    scanf("%d%d%d",&h,&m,&s);
    
    if(h>=0 && h<=24)
       { 
        if(m>=0 && m<=60)
        {
            if(s>=0 && s<=60)
           {
           printf(" time is valid %02d %02d %02d",h,m,s);

           }
           else
           printf("invalid hour");
        }
        else
        printf("invalid minutes");

       }
       else
      printf("invalid second");
    return 0;
}