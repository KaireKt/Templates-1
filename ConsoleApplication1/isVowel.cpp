#include "libraries.h"
#include "prototypes.h"
bool isVowel(char c)
{
    return c == 'A' || c == 'a' || c == 'E' || c == 'e' ||
        c == 'Y' || c == 'y' || c == 'U' || c == 'u' ||
        c == 'I' || c == 'i' || c == 'O' || c == 'o';
}