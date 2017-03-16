#include <stdio.h>

int main()
{
  int last, c;
  int empty_string = '\0';

  while ((c = getchar()) != EOF) {
    if (last == ' ' && c == ' ') c = empty_string;
    printf("%c", (char)c);
    if (c != empty_string) last = c;
  }
}
