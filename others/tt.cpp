#include <iostream>
#include <random>
using namespace std;

int main(void) {
  random_device rd;
  mt19937 gen(rd());
  int a;
  cin >> a;
  uniform_int_distribution<int> dis(1, a);
  for (int i = 0; i < 20; i++) {
    int q = dis(gen);
    cout << q << endl;
  }
  return 0;
}