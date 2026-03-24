#include <stdio.h>

int main() {
    float usd, rate, convertedAmount;

    printf("Enter USD amount: ");
    scanf("%f", &usd);

    printf("Enter exchange rate (1 USD to Foreign): ");
    scanf("%f", &rate);

    
    convertedAmount = usd * rate;

    printf("Converted amount: %.2f\n", convertedAmount);

    return 0;
}
