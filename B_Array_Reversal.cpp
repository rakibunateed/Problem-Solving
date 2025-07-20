#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}