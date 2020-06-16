#include <stdio.h>

/* Assignment is to sort a string based on a non-alphabetical key string */

int main (void) {
  char test_string[] = "eke-elektroniikka";
  static char key_string[] = "QWERTYUIOPÅASDFGHJKLÖÄZXCVBNM";

  printf("\nAlkuperäinen merkkijono: %s", test_string);
  printf("\nAakkostusavain: %s\n", key_string);

  return 0;
}
