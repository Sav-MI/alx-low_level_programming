#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: The string
 * Return: The string
 */

char *rot13(char * restrict en)
{
  char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
  char al[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  unsigned int pp, oo, j;

  for (oo = 0; en[oo] != '\0'; oo++){
    j = 0;
    for (pp = 0; al[pp] != '\0' && j == 0; pp++){
      if (en[oo] == al[pp]){
	en[oo] = encode[pp];
	j = 1;
      }
    }
  }

  return en;
}

