#include <stdio.h>
#include <stdbool.h>

bool isValueInArray(int val, int arr[], int size)
{
  int i;
  for (i=0; i < size; i++) {
    if (arr[i] == val) return true;
  }
  return false;
}

int main()
{
  int c, found_this_many;
  int findThese[3] = {' ', '\t', '\n'};

  found_this_many = 0;
  while ((c = getchar()) != EOF) {
    if (isValueInArray(c, findThese, 3)) found_this_many++;
  }
  printf("%d\n", found_this_many);
}
