#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[10] = "hadeEr";
    int i = 0;

    while (string[i] != '\0') {
        if (!((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))) {
            printf("Invalid Input\n");
            return 1;
        } else if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        } else {
            string[i] = string[i];
        }
        i++;
    }

    printf("Capitalized String: %s\n", string);

    return 0;
}
