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
void displayCode(char*);

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

    char* line;
    line = (char*)malloc(100 * sizeof(*line));
    printf("Enter a line>>> ");
    scanf("%s", line);

    if (isInMorseCode(line)) {

    }
    else {
        while (*line != '\0') {
            char* code = convertLetterToMorseCode(*line++, codes);
            displayCode(code);
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
        if (strcmp(code, (*codes).morse))
            return (*codes).letter;
        codes++;
    }
}

void displayCode(char* str) {
    while (*str != '\0')
        printf("%c", *str++);
    printf(" ");
}
