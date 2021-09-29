#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 8; i > 0; i--) {
    printf("[%d %d %d]\n", 
        (i / 4 != 1)+1, 
        ((i/2)%2 == 0)+1,
        (i % 2 == 0)+1
    );
  }
  
  return 0;
}