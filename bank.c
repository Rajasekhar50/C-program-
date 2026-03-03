#include <stdio.h>
#include <string.h>


struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};


void deposit(struct BankAccount *acc);
void withdraw(struct BankAccount *acc);
void display(struct BankAccount acc);

int main() {
    struct BankAccount myAccount = {1001, "John Doe", 500.0};
    int choice;

    while (1) {
        printf("\n--- Bank System ---\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: deposit(&myAccount); break;
            case 2: withdraw(&myAccount); break;
            case 3: display(myAccount); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

void deposit(struct BankAccount *acc) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    if (amount > 0) {
        acc->balance += amount;
        printf("Deposit successful. New Balance: %.2f\n", acc->balance);
    }
}

void withdraw(struct BankAccount *acc) {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrawal successful. New Balance: %.2f\n", acc->balance);
    } else {
        printf("Insufficient funds or invalid amount.\n");
    }
}

void display(struct BankAccount acc) {
    printf("\nAccount No: %d\nName: %s\nBalance: %.2f\n", acc.accountNumber, acc.name, acc.balance);
}
