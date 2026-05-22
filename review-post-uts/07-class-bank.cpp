#include <iostream>

using namespace std;

class Tabungan {
private:
  int saldo;

public:
  Tabungan(int awal) { saldo = awal; }

  void setor(int jumlah)
  {
    if (jumlah > 0) {
      saldo += jumlah;
    }
  }

  void tarik(int jumlah)
  {
    if (jumlah > saldo) {
      cout << "Gagal: Saldo tidak cukup!" << endl;
    } else if (jumlah > 0) {
      saldo -= jumlah;
      cout << "Berhasil menarik " << jumlah << endl;
    }
  }

  void tampilSaldo()
  {
  	cout << "Saldo saat ini: " << saldo << endl;
  }
};

int main()
{
  int uangAwal, menu, jumlah;

  uangAwal = 0;

  Tabungan atm(uangAwal);

  do {
    cout << "\n1. Setor\n2. Tarik\n3. Cek Saldo\n4. Keluar\nPilih: ";
    cin >> menu;

    if (menu == 1) {
      cout << "Jumlah setor: ";
      cin >> jumlah;
      atm.setor(jumlah);
    } else if (menu == 2) {
      cout << "Jumlah tarik: ";
      cin >> jumlah;
      atm.tarik(jumlah);
    } else if (menu == 3) {
      atm.tampilSaldo();
    }
  } while (menu != 4);

  return 0;
}
