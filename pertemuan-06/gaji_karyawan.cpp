#include <iomanip> // library baru untuk memformat angka
#include <iostream>
using namespace std;

int main() {
  // bagian input nama dan golongan
  cout << "masukkan nama anda: ";
  string nama;
  // getline digunakan agar nama lengkap tetap diterima program
  getline(cin, nama);

  cout << "masukkan golongan anda (1/2/3): ";
  int golongan;
  cin >> golongan;

  // menggunakan switch case karena lebih sederhana
  float gaji = 0;
  switch (golongan) {
  case 1:
    gaji += 5000000;
    break;
  case 2:
    gaji += 3000000;
    break;
  case 3:
    gaji += 2500000;
    break;
  default:
    cout << "error: golongan invalid. (1/2/3)\n";
    return 1;
  }

  // hitung pajak sebelum tunjangan anak (berdasarkan petunjuk modul)
  float pajak = (5.0 / 100) * gaji;
  // dan kurangi gaji
  gaji = gaji - pajak;

  // menghitung tambahan uang untuk anak
  cout << "jumlah tanggungan (anak): ";
  int anak;
  cin >> anak;

  if (anak > 2)
    gaji += 750000;
  else if (anak <= 2 && anak > 0)
    gaji += (500000 * anak);

  // tampilkan throughput
  cout << "gaji total: " << fixed << setprecision(0) << gaji << endl;
  // nb: fixed = fungsi cpp agar output tidak berbentuk notasi (e.g. 3.6e+06),
  // setprecision menghapus +06 angka dibelakang koma agar rapi
  return 0;
}
