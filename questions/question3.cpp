#include <iostream>
using namespace std;

void table(int val)
{
  int mul = 1;
  while (mul <= 10)
  {
    cout << val * mul << endl;
    mul = mul + 1;
  }
}

int main()
{
  int x;
  cin >> x;
  int result = x * 2;
  int result1 = x * 3;
  int result2 = x * 4;
  int result3 = x * 5;
  int result4 = x * 6;
  int result5 = x * 7;
  int result6 = x * 8;
  int result7 = x * 9;
  int result9 = x * 10;
  // int result8 = x * 2;
  cout << result << endl;
  cout << result1 << endl;
  cout << result2 << endl;
  cout << result3 << endl;
  cout << result4 << endl;
  cout << result5 << endl;
  cout << result6 << endl;
  cout << result7 << endl;
  // cout <<result8<<endl;
  cout << result9 << endl;
  table(x);
  return 0;
}
// take an input
//  make table of it by multiplying with 2 3 4 5 6 7 8 9