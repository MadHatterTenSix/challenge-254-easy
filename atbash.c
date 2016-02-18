/* atbash.c */

/**
 *
 * @author __MadHatter (alias used on https://www.reddit.com/r/dailyprogrammer)
 *
 * [2016-02-16] Challenge #254 [Easy] Atbash Cipher
 * https://www.reddit.com/r/dailyprogrammer/comments/45w6ad/20160216_challenge_254_easy_atbash_cipher/
 *
 */

#include <stdio.h>
#include <string.h>

char a_lower[] = "zyxwvutsrqponmlkjihgfedcba";
char a_upper[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

void cipher(char* str);

int main()
{  
  char buf[512];
  while (fgets(buf, 512, stdin) != 0 && strlen(buf) > 1)
    cipher(buf);
  return 0;
}

void
cipher(char* str)
{
  int i;
  int len;
  char c;
  len = strlen(str);
  for (i = 0; i < len; i++) {
    c = str[i];
    if (c >= 'A' && c <= 'Z')
      c = a_upper[(c - 'A')];
    else if (c >= 'a' && c <= 'z')
      c = a_lower[(c - 'a')];
    printf("%c", c);
  }
}
