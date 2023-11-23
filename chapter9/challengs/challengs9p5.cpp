#include <iostream>

using namespace std;

int doSomething(int* x, int* y) {
  int temp = *x;
  *x = *y * 10;
  *y = temp * 10;
  return *x + *y;
}

int main() {
  int x = 10;
  int y = 20;

  cout << "Before:" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  int sum = doSomething(&x, &y);

  cout << "After:" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "Sum = " << sum << endl;

  return 0;
}