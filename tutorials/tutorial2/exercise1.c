#include <stdio.h>

int main(const int argc, const char *argv[]) {
  /*i)*/ printf("*\n**\n***\n****\n*****\n");
  /*
   *
   **
   ***
   ****
   *****
   */

  const int x = 2;
  const int y = 3;
  /*ii)*/ printf("%d", x + x);  // 4

  /*iii)*/ printf("x = ");                 // x =
  /*iv)*/ printf("x=%d", x);               // x=2
  /*v)*/ printf("%d = %d", x + y, y + x);  // 5 = 5
  /*vi)*/                                  /*printf( “%d”, x+y );*/
  /*vii)*/ printf("\n");                   /*
                                            */
  float z = 45.567;
  /*viii)*/ printf("value is %.2f", z);  // value is 45.57
  return 0;
}
