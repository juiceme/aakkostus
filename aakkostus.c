#include <stdio.h>
#include <ctype.h>
#include <string.h>


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


int main (void) {
  char test_string[] = "eke-elektroniikka";

  printf("\nAlkuperäinen merkkijono: %s", test_string);

  printf("\nQ: %d", get_index_from_keystring("Q"));
  printf("\nM: %d", get_index_from_keystring("M"));
  printf("\nA: %d", get_index_from_keystring("A"));
  printf("\nÖ: %d", get_index_from_keystring("Ö"));
  printf("\nq: %d", get_index_from_keystring("q"));
  printf("\nm: %d", get_index_from_keystring("m"));
  printf("\na: %d", get_index_from_keystring("a"));
  printf("\nö: %d\n", get_index_from_keystring("ö"));
  
  return 0;
}
