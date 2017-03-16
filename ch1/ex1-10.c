#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    switch(c) {
      case '\t':
        printf("\\");
        c = 't';
        break;
      case '\b':
        printf("\\");
        c = 'b';
        break;
      case '\\':
        printf("\\");
        c = '\\';
        break;
    }
    printf("%c", (char)c);
  }
}
