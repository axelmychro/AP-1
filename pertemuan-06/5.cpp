#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  if (!(a <= b) && b > 2)
    cout << "YES";
  else
    cout << "NO";
}
