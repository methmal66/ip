#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"
#include "code.h"
#include "check.h"

int main() {
    Code codes[] = {
        {'A', ".-"},
        {'B', "-..."},
        {'C', "-.-."},
        {'D', "-.."},
        {'E', "."},
        {'F', "..-."},
        {'G', "--."},
        {'H', "...."},
        {'I', ".."},
        {'J', ".---"},
        {'K', "-.-"},
        {'L', ".-.."},
        {'M', "--"},
        {'N', "-."},
        {'O', "---"},
        {'P', ".--."},
        {'Q', "--.-"},
        {'R', ".-."},
        {'S', "..."},
        {'T', "-"},
        {'U', "..-"},
        {'V', "...-"},
        {'W', ".--"},
        {'X', "-..-"},
        {'Y', "-.--"},
        {'Z', "--.."},

    };

    char* line = (char*)malloc(100 * sizeof(char*));
    printf("Enter a line>>> ");
    scanf("%[^\t\n]", line);

    if (isInMorseCode(line)) {
        char* token = strtok(line, " ");
        while (token != NULL) {
            char letter = convertMorseCodeToLetter(token, codes);
            printf("%c", letter);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }

    else {
        while (*line != '\0') {
            char* code = convertLetterToMorseCode(*line++, codes);
            printf("%s ", code);
        }
        printf("\n");
    }

    getchar();
    main();
}