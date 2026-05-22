#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  float hasil1 = a % b;
  float hasil2 = a / b;
  if (hasil1 == 0 and hasil2 > 2) {
    cout << "VALID";
  } else {
    cout << "TIDAK";
  }
}
