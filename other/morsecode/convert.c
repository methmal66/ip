#include "code.h"
#include <string.h>

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