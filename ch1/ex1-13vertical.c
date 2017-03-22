#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int i, j, c, state, max_char_count, word_length, occurrences;
  max_char_count = 40;
  word_length = 0;

  int word_lengths[max_char_count];
  for (i = 0; i < max_char_count + 1; i++) {
    word_lengths[i] = 0;
  }

  state = OUT;
  while (1) {
    c = getchar();
    if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
      state = OUT;
      if (word_length > 0) {
        word_lengths[word_length]++;
        word_length = 0;
      }
    } else {
      if (state == OUT) state = IN;
      word_length++;
    }

    if (c == EOF) break;
  }

  for (i = 1; i < max_char_count + 1; i++) {
    occurrences = word_lengths[i];
    if (occurrences > 0) {
      printf("%2d | ", i);
      for (j = 0; j < occurrences; j++) {
        printf("*");
      }
      printf("\n");
    }
  }
}
