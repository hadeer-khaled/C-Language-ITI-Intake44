#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[10] = "h%ad@ee/r";
    char newString[10];

    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')) {
            newString[j] = str1[i];
            j++;
        }
        i++;
    }

    newString[j] = '\0';

    printf("The old string = %s\n", str1);
    printf("The new string = %s\n", newString);

    return 0;
}
