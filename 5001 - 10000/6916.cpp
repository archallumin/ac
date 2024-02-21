#include <iostream>
using namespace std;

const char *DIGITS[] = {
    " * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *\n",
    "\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *\n",
    " * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *\n",
    "\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n",
    " * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *\n",
    " * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *\n"};

int main(void)
{
  int a;
  cin >> a;
  cout << DIGITS[a];
  return 0;
}