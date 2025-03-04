#include <stdio.h>

void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        check_even_odd(num);
    } else {
        printf("Please enter a valid integer.\n");
    }
    return 0;
}

