#include<stdio.h>
#include<conio.h> 
#include<math.h>

int main() {
    int n, i;
    float x[20], y[20], sumx=0, sumy=0, sumxy=0, sumx2=0;
    float a, b; 

    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Enter x values: ");
    for(i = 0; i < n; i++) scanf("%f", &x[i]);
    printf("Enter y values: ");
    for(i = 0; i < n; i++) scanf("%f", &y[i]);

    
    for(i = 0; i < n; i++) {
        sumx += x[i];
        sumx2 += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
}
    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy - b * sumx) / n;

    printf("\nLine: Y = %3.3f + %3.3fX", a, b);
    return(0);
}
