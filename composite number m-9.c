#include <stdio.h>

int isComposite(int num) {
    int i;
    for(i=2; i<=num/2; i++) {
        if(num%i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a, b, i;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);
    printf("Composite numbers between %d and %d are:\n", a, b);
    for(i=a+1; i<b; i++) {
        if(isComposite(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
