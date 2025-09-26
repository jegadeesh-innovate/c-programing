#include <stdio.h>

int main() {
    int num, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    if (lastDigit % 2 == 0) {
        printf("The last digit %d is Even.\n", lastDigit);
    }
	else {
        printf("The last digit %d is Odd.\n", lastDigit);
    }

    return 0;
}
