#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += v[i];
  }
  printf("%d \n", s);
  return 0;
}