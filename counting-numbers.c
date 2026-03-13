#include <stdio.h>

int main() {
    int number, count = 0;

   
    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number == 0) {
        count = 1;
    } else {
        
        if (number < 0) {
            number = -number;
        }
        
        
        do {
            count++;    
            number /= 10; 
        } while (number != 0);
    }

    
    printf("Number of digits: %d\n", count);

    return 0;
}
