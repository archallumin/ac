#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int gcd(int a, int b) {
  int mod = a % b;
  while (mod > 0) {
    a = b;
    b = mod;
    mod = a % b;
  }
  return b;
}

int main(void) {
  int a, b;
  scanf("%d:%d", &a, &b);
  printf("%d:%d", a / gcd(a, b), b / gcd(a, b));
  return 0;
}