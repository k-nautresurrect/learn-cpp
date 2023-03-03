/*take an input from user and print whether this no is odd or even
 */
#include <iostream>
using namespace std;
int number(int mark)
{
  if (mark % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int x;
  cin >> x;
  int gbg = number(x);
  cout << gbg << endl;
  return 0;
}
