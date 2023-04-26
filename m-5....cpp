#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int num_names, i, j, k;
    char temp[MAX_LENGTH], order;

    printf("Enter the number of names: ");
    scanf("%d", &num_names);

    printf("Enter the names:\n");
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter the sorting order (A for ascending, D for descending): ");
    scanf(" %c", &order);

    for (i = 0; i < num_names - 1; i++) {
        for (j = 0; j < num_names - i - 1; j++) {
            if (order == 'A' || order == 'a') {
                if (strcmp(names[j], names[j+1]) > 0) {
                    strcpy(temp, names[j]);
                    strcpy(names[j], names[j+1]);
                    strcpy(names[j+1], temp);
                }
            } else if (order == 'D' || order == 'd') {
                if (strcmp(names[j], names[j+1]) < 0) {
                    strcpy(temp, names[j]);
                    strcpy(names[j], names[j+1]);
                    strcpy(names[j+1], temp);
                }
            } else {
                printf("Invalid sorting order specified.\n");
                return 1;
            }
        }
    }

    printf("The sorted names are:\n");
    for (k = 0; k < num_names; k++) {
        printf("%s\n", names[k]);
    }

    return 0;
}

