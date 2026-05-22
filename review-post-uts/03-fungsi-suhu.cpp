#include "03-fungsi-suhu.hpp"
#include <iostream>
using namespace std;

int main()
{
  double celsius;
  cout << "Masukkan suhu dalam Celsius: ";
  cin >> celsius;

  double fahrenheit = celsiusToFahrenheit(celsius);
  double kelvin = celsiusToKelvin(celsius);

  cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;
  cout << "Suhu dalam Kelvin: " << kelvin << endl;
}
