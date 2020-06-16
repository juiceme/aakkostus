# Coding assignment

## Description

Code a simple implementation of a routine that sorts a string based on a transpose keystring.

The keystring is "QWERTYUIOPÅASDFGHJKLÖÄZXCVBNM" and the string to be sorted is"eke-elektroniikka"

## Implementation

I deciced to use qsort as internal implementation because it is trusted part of the standard library and can easily be adapted to this kind of task just by tweaking the sortinc callback function.

I created an indexing function that returns the relative position of any given character in the keystring and used that as basisi of the qsort. As the keystring is all-caps and assignment specifies a lowercase-string as input I decided to convert lowercase characters to uppercase before indexing.

The specified inputstring contains a character not present in the keystring, namely "-", so I decided to clean the inputstring from illegal characters before sorting.

## Testing

I tested the indexing function using corner cases of the end letters of the alphabet (a, A, ö, Ö) and end letters of the keystring (q, Q, m, M)

## Notes

The original assignment text seems to contain an error, the resulting string that is presented is not correct. ("eeeertiioakkkln" is one k-letter shorter than the correct answer "eeeertiioakkkkln")
