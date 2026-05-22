#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  char tampil;
  if (x > 5 && x < 8) {
    tampil = 'A';
  } else if (x > 5) {
    tampil = 'B';
  } else {
    tampil = 'C';
  }
  cout << tampil << endl;
}
