#include <stdio.h>
#include <string.h>

void convertStringsToAsterisks(int numInputs) {
    char strings[numInputs][100]; 
    int i;

    for (i = 0; i < numInputs; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    for (i = 0; i < numInputs; i++) {
        for (int j = 0; j < strlen(strings[i]); j++) {
            strings[i][j] = '*';
        }
    }

    printf("\nConverted strings:\n");
    for (i = 0; i < numInputs; i++) {
        printf("%s\n", strings[i]);
    }
}

int main() {
    int numInputs;

    printf("Enter the number of strings: ");
    scanf("%d", &numInputs);

    convertStringsToAsterisks(numInputs);

    return 0;
}
