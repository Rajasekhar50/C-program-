#include <stdio.h>

int main() {
    int up;
    scanf("%d",&up); 
    int i,j;

    for (i = 3; i<=up; i++) {
    int flag=0; 
        for (j = 2; j<=i-1; j++) { 
            if(i%j==0){
            flag=1;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }

    
}