#include <iostream>
using namespace std;
bool fucn(int year)
{
  if (year % 4 == 0)
  {
    if (year % 400 != 0)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int x;
  cin >> x;
  bool result = fucn(x);
  cout << boolalpha << result << endl;
  return 0;
}