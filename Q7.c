#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is smallest initially
    smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The smallest number is %d\n", smallest);

    return 0;
}
