#include <stdio.h>


struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};

int main() {
    struct Item items[100]; 
    int count = 0;
    float grandTotal = 0.0;
    int choice;

    do {
        printf("\n1. Add Item, 2. View Bill, 3. Exit: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Name, Qty, Price: ");
            scanf("%s %d %f", items[count].name, &items[count].quantity, &items[count].price);
            items[count].total = items[count].quantity * items[count].price;
            grandTotal += items[count].total;
            count++;
        } else if (choice == 2) {
            printf("Total: %.2f\n", grandTotal);
        }
    } while (choice != 3);

    return 0;
}
