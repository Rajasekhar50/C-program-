#include <stdio.h>

int main() {
    
    float cost_per_exam;
    int num_exams;
    float total_fee;


    printf("Enter the cost per exam: $");
    
    scanf("%f", &cost_per_exam);
    
    printf("Enter the number of exams: ");
    
    scanf("%d", &num_exams);

    
    total_fee = cost_per_exam * num_exams;

    
    printf("\nTotal payment required: $%.2f\n", total_fee);

    return 0; 
}