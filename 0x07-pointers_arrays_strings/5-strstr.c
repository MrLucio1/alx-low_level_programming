#include "main.h"
#include <stdio.h>

/**
* *_strstr - finds the substring needle
* @haystack: the string to search int
* @needle: the substring to be looked for
* 
* Return: pointer to the beginning of the located substring
* or null incase the string is not found
*/
char *_strstr(char *haystack, char *needle)
{
int x, y;

for (x = 0; haystack[x] != '\0'; x++)
{
for (y = 0; needle[y] != '\0'; y++)
{
if (haystack[x + y] != needle[y])
break;
}
if (!needle[y])
return (&haystack[x]);
}
return (NULL);
}
