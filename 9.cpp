#include <iostream>
using namespace std;

int main() {
  char tampil;
  for (int i = 1; i <= 15; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      tampil = 'Z';
    } else if (i % 3 == 0) {
      tampil = 'X';
    } else if (i % 5 == 0) {
      tampil = 'Y';
    } else {
      cout << i;
    }
    cout << tampil;
  }
  cout << endl;
}
