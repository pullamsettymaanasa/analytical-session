#include <stdio.h>

int main() {
    int m, n, k, i;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);

    i = m;
    while (i <= n) {
        printf("%d ", i);
        i =i+ k;
        if (i > n) {
            break;
        }
        i++;
    }

    return 0;
}
