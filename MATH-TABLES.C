#include <stdio.h>

int main()
{
    int num, rows;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= rows; i++)
    {
        
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}