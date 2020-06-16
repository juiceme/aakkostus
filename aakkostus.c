#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


/* Returns the zero-based index of input character from the key-string.
   Returns -1 on an unknown input character */
static int get_index_from_keystring(char *key)
{
  static char key_string[] = "QWERTYUIOPÅASDFGHJKLÖÄZXCVBNM";
  int i = 0;
  char upper_key =  toupper(*key);
    
  for (i = 0; i < (int)strlen(key_string); i++) {
    if (upper_key == key_string[i]) {
      return i;
    }
  }
  return -1;
}


static int qsort_compare(const void * a, const void * b)
{
  return (get_index_from_keystring((char *)a) - get_index_from_keystring((char *)b));
}


int main (void) {
  char test_string[] = "eke-elektroniikka";

  printf("\nAlkuperäinen merkkijono: %s", test_string);

  qsort(test_string, strlen(test_string), sizeof(char), qsort_compare);

  printf("\nLajiteltu merkkijono:    %s\n", test_string);
   
  return 0;
}
