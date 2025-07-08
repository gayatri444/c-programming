#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of proper divisors
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the original number
    if(sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);

    return 0;
}
            