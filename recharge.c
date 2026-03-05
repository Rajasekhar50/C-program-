#include <stdio.h>

void checkBalance() {
    printf("\n--- Account Balance ---\n");
    printf("Data Balance: 1.5 GB / Day\n");
    printf("Validity: 28 Days\n");
}

void recharge() {
    printf("\n--- Recharge Menu ---\n");
    printf("1. Rs. 299 - 1.5GB/day\n");
    printf("2. Rs. 719 - 2GB/day\n");
    printf("Select plan: ");
}

int main() {
    int choice;
    do {
        printf("\n=== MyJio Simulator ===\n");
        printf("1. Check Balance\n");
        printf("2. Recharge\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: checkBalance(); break;
            case 2: recharge(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 3);

    return 0;
}
