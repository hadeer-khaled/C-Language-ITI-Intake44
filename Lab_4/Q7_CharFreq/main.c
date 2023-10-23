#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50]= "lannguageee";
    int freqArray[127] = {0};


    int i = 0 ;
    while(str[i] != '\0') {
        freqArray[(int)str[i]]++;
        i++ ;
    }


    printf("Frequency of each character: \n");
    for (int i = 0; i < 127; i++) {
        if (freqArray[i] > 0) {
            printf("%c: %d\n", (char)i, freqArray[i]);
        }
    }

    return 0;
}
