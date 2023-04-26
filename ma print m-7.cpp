#include <stdio.h>

int main() {
    int num = 1; 
    int max_prints = 3; 
    
    for (int i = 1; i <= max_prints; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    
    for (int i = max_prints-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    
    return 0;
}
