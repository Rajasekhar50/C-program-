#include <stdio.h>

int main() {
    
    long long phoneNumber;
    float amount;
    int carrierChoice;

    printf("--- Simple Mobile Recharge Program ----\n");
    
    printf("Enter 10-digit phone number: ");
    if (scanf("%lld", &phoneNumber) != 1 || phoneNumber < 1000000000 || phoneNumber > 9999999999) {
        printf("Invalid phone number. Please enter a valid 10-digit number.\n");
        return 1; 
    }


    printf("Enter recharge amount (e.g., 50.00): $");
    if (scanf("%f", &amount) != 1 || amount <= 0.0) {
        printf("Invalid amount. Amount must be positive.\n");
        return 1; 
    }

    
    printf("Select carrier:\n");
    printf("1. Carrier A\n");
    printf("2. Carrier B\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &carrierChoice);

    
    switch (carrierChoice) {
        case 1:
            printf("Processing recharge for Carrier A...\n");
            printf("Successfully recharged $%.2f to number %lld.\n", amount, phoneNumber);
            break;
        case 2:
            printf("Processing recharge for Carrier B...\n");
          
            printf("Successfully recharged $%.2f to number %lld.\n", amount, phoneNumber);
            break;
        default:
            printf("Invalid carrier choice. Recharge failed.\n");
            return 1;
    }

    return 0;
}
