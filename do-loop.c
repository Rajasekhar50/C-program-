#include <stdio.h>
int main() {
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0); // Loop continues if the number is not positive
    printf("You entered: %d\\n", number);
    return 0;
}