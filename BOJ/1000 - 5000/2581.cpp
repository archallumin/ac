#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
  if (n < 2)
    return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  vector<int> primes;
  int sum = 0;
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (isPrime(i))
      primes.push_back(i);
  }
  for (int i = 0; i < primes.size(); i++) {
    if (primes[i] <= 10000)
      sum += primes[i];
  }
  if (sum == 0)
    cout << "-1\n";
  else
    cout << sum << "\n" << primes[0] << "\n";
  return 0;
}