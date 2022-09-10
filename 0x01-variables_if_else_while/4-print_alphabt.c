#include <stdio.h>
/**
  * main - prints the alphabet in lowercase
  * Print all the letters except q and e,
  * followed by a new line.
  * Return: Always 0 (Success)
  */
int main(void)
 {
         char mine = 'a';

         while (mine <= 'z')
         {
                 if (mine != 'e' && mine != 'q')
                 {
                         putchar(mine);
                 }
                 mine++;
         }
         putchar('\n');
         return (0);
 }
