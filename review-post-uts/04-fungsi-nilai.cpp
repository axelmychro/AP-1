#include <iostream>
#include <vector>
using namespace std;

int hitungTotal(vector<int> arr)
{
  int n = 0;
  for (int i = 0; i < arr.size(); i++) {
    n += arr[i];
  }
  return n;
}

double hitungRataRata(vector<int> arr)
{
  int n = 0;
  for (int i = 0; i < arr.size(); i++) {
    n += arr[i];
  }
  return n / arr.size();
}

int cariNilaiTertinggi(vector<int> arr)
{
  int n = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > n) {
      n = arr[i];
    }
  }
  return n;
}

int cariNilaiTerendah(vector<int> arr)
{
  int n = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < n) {
      n = arr[i];
    }
  }
  return n;
}

int main()
{
  vector<int> nilai;
  int n, data;
  int total = 0;

  cout << "jumlah data: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "nilai ke-" << i + 1 << ": ";
    cin >> data;
    nilai.push_back(data);
  }

  cout << "total nilai : " << hitungTotal(nilai) << endl;
  cout << "rata rata nilai : " << hitungRataRata(nilai) << endl;
  cout << "nilai tertinggi : " << cariNilaiTertinggi(nilai) << endl;
  cout << "nilai terendah : " << cariNilaiTerendah(nilai) << endl;
  return 0;
}
