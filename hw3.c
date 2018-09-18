#include <stdlib.h>
#include <time.h>

int main() {
  int a[10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
    a[i] = rand();
  a[9] = 0;
  return 0;
}
