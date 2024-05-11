#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
  int a, b;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d,%d", &a, &b);
    printf("%d\n", a + b);
  }
  return 0;
}