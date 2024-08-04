#include <stdio.h>
int main() {

  int i, n;
  int A1 = 0, A2 = 1;
  int nextnumber= A1 + A2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d\n %d\n ", A1, A2);
  for (i = 3; i <= n; ++i) {
    printf("%d\n ", nextnumber);
    A1 = A2;
    A2 = nextnumber;
    nextnumber = A1 + A2;
  }

  return 0;
}