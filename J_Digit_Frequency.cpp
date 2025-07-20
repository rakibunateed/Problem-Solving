#include <stdio.h>
#include <string.h>
int main() {
  char s[100005];
  scanf("%s", s);
  int zero = 0, one = 0, two = 0, three = 0, four = 0;
  int five = 0, six = 0, seven = 0, eight = 0, nine = 0;
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] == '0') zero++;
    if (s[i] == '1') one++;
    if (s[i] == '2') two++;
    if (s[i] == '3') three++;
    if (s[i] == '4') four++;
    if (s[i] == '5') five++;
    if (s[i] == '6') six++;
    if (s[i] == '7') seven++;
    if (s[i] == '8') eight++;
    if (s[i] == '9') nine++;
  }
  printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five,
         six, seven, eight, nine);
  return 0;
}