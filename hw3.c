#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int a[10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
    a[i] = rand();
  a[9] = 0;
  
  printf("wacky array: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", a[i]);
  
  printf("\nwacky array but now its backwards: ");
  int b[10];
  for (int i = 0; i < 10; i++) {
    *(b + i) = *(a + 9 - i);
    printf("%d ", *(b + i));
  }
  
  return 0;
}
