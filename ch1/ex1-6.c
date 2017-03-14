#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar())) {
    /* is zero when ctrl+D is entered, although this makes the terminal go haywire. */
    printf("%d\n", c != EOF);
  }
}
