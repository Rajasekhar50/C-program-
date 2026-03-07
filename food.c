#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;
    char orderAgain;

    printf("\n--- Welcome to Fast Food Corner ---\n");

    do {
        printf("\nMenu:\n");
        printf("1. Burger - Rs. 150\n");
        printf("2. Pizza - Rs. 300\n");
        printf("3. Fries - Rs. 100\n");
        printf("4. Coffee - Rs. 50\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity for Burger: ");
                scanf("%d", &qty);
                total += qty * 150;
                break;
            case 2:
                printf("Enter quantity for Pizza: ");
                scanf("%d", &qty);
                total += qty * 300;
                break;
            case 3:
                printf("Enter quantity for Fries: ");
                scanf("%d", &qty);
                total += qty * 100;
                break;
            case 4:
                printf("Enter quantity for Coffee: ");
                scanf("%d", &qty);
                total += qty * 50;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &orderAgain); // Space before %c consumes newline

    } while (orderAgain == 'y' || orderAgain == 'Y');

    printf("\n-------------------------\n");
    printf("Total Amount: Rs. %.2f\n", total);
    printf("Thank you for ordering!\n");
    printf("-------------------------\n");

    return 0;
}
