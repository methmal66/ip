#include <stdio.h>
#include <string.h>

short is_palindrome(char[]);

int main(int argc, char *argv[]) {
  char check_word[150];
  printf("Enter a word to check if it is a palindrome : ");
  scanf("%s", check_word);
  printf("%s is%s a palindrome\n", check_word,
         is_palindrome(check_word) ? "" : " not");
  return 0;
}

short is_palindrome(char word[]) {
  short len = strlen(word);
  for (int i = 0; i < len / 2; i++) {
    if (word[i] != word[len - 1 - i]) return 0;
  }
  return 1;
}
