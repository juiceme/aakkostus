#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define INDEX_ERROR -1

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
  return INDEX_ERROR;
}


static int qsort_compare(const void * a, const void * b)
{
  return (get_index_from_keystring((char *)a) - get_index_from_keystring((char *)b));
}


int main (void) {
  char original_string[] = "eke-elektroniikka";
  char clean_string[strlen(original_string)];
  int i = 0, j = 0;

  // Remove illegal characters
  memset(clean_string, 0, sizeof(clean_string));
  for (i = 0; i < (int)strlen(original_string); i++) {
    if(get_index_from_keystring(&original_string[i]) != INDEX_ERROR) {
      clean_string[j++] = original_string[i];
    }
  }

  printf("\nAlkuperäinen merkkijono: %s", original_string);
  printf("\nPuhdistettu merkkijono:  %s", clean_string);
  qsort(clean_string, strlen(clean_string), sizeof(char), qsort_compare);
  printf("\nLajiteltu merkkijono:    %s\n\n", clean_string);
   
  return 0;
}
