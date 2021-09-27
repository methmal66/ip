#include <stdio.h>
#include <stdlib.h>

int calculate_total_cost(short type, short count) {
  switch (type) {
    case 1:
      return 2000 * count;
    case 2:
      return 5000 * count;
    case 3:
      return 7000 * count;
    default: {
      printf("%h does not match any from 1,2 or 3\n");
      exit(-1);
    }
  }
}

// an alternative function without swith case
// int calculate_total_cost(short type, short count) {
//   if (type > 2) {
//     printf("%h does not match any from 1,2 or 3\n");
//     exit(-1);
//   }
//   const int TYPES[] = {2000, 5000, 7000};
//   return TYPES[type - 1] * count;
// }

int main(int argc, char *argv[]) {
  short type, count;
  const char YELLOW[] = "\e[0;33m";
  printf("Pakage type 1)horse ride 2)scuba diving 3)water rafting : ");
  scanf("%hu", &type);
  printf("Number of participants : ");
  scanf("%hu", &count);
  const int cost = calculate_total_cost(type, count);
  printf("%sTotal cost : %d", YELLOW, cost);
  getchar();
  getchar();
  return 0;
}