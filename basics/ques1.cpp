#include <iostream>

using namespace std;

// add function
int add(int a, int b)
{
  return a + b;
}
int sub(int a, int b)
{
  return a - b;
}
int multiply(int a, int b)
{
  return a * b;
}

int main()
{
  int x, y;
  cin >> x >> y;
  int res = add(x, y);
  int res1 = sub(x, y);
  int res2 = multiply(x, y);
  cout << res << endl;
  cout << res1 << endl;
  cout << res2 << endl;
  return 0;
}
