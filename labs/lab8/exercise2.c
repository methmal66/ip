#include <stdio.h>

int main(int argc, char *argv[]) {
  int key;
  printf("Enter a key to search : ");
  scanf("%d", &key);

  const int length = 10;
  const int values[] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
  for (int i = 0; i < length; i++) {
    if (key != values[i]) continue;
    printf("Index no. : %d\n", i);
    return -1;
  }

  return 0;
}