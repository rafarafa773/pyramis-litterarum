#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
  char *x = argv[1];
  int n = strlen(x);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++)
      printf(" ");
    for (int j = i; j >= 0; j--)
      putchar(x[j]);
    printf(" %.*s\n", i + 1, x);
    usleep(100000);
  }
  return 0;
}
