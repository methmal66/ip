#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char letter;
    char* morse;
} Code;

short isInMorseCode(char*);
char convertMorseCodeToLetter(char*, Code*);
char* convertLetterToMorseCode(char, Code*);

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

    main();
}

short isInMorseCode(char* line) {
    char firstChar = *line;
    if (firstChar == '.' || firstChar == '-')
        return 1;
    return 0;
}

char* convertLetterToMorseCode(char letter, Code* codes) {
    while ((*codes).letter != '\n') {
        if (letter == (*codes).letter)
            return (*codes).morse;
        codes++;
    }
}

char convertMorseCodeToLetter(char* code, Code* codes) {
    while ((*codes).letter != '\n') {
        if (strcmp(code, (*codes).morse) == 0)
            return (*codes).letter;
        codes++;
    }
}