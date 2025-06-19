#include<stdio.h>
#include<ctype.h>
int main()
    {
        char ch;
printf("enter enything");
scanf("%c",&ch);
if(isalphabet(ch))
printf("Alphabet");
else if(isdigit(ch))
printf("Digit");
else
printf("special symbol");
return 0;

    }
