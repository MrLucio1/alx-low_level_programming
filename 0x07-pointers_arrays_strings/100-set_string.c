#include "main.h"

/**
 * set_string - It sets the value of a pointer to a char
 * @s: pointer to pointer that is needed to set to
 * @to: the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
