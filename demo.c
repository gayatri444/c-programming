#include <stdio.h>
int main()
{
    char ch;
    printf(" Enter Anything :");
    scanf(" %c", &ch);

    if ((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
        printf("ALPHABATE");

    else if (ch >='0' && ch <='9')
        printf("DIGIT");

    else
        printf("Special Symbol");

    return 0;
}