#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase of a strings.
 *
 * @p: pointer to the strings.
 *
 */

char *string_toupper(char *str)
{
    char *p = str;

    while (*p != '\0') {   // iterate through the string
        *p = toupper(*p);   // convert the character to uppercase
        p++;   // move to the next character
    }

    return str;   // return the modified string
}

