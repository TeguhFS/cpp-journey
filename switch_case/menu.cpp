#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nomerMenu, jumlahPorsi;
    int hargaSatuanMenu = 0;
    int totalHarga = 0;
    string namaMakanan = "";
    bool menuValid = true;

    cout << "=== SILAHKAN PILIH MENU MAKANAN ===" << endl;
    cout << "1. Bakso       : Rp18.000" << endl;
    cout << "2. Kwetiau     : Rp15.000" << endl;
    cout << "3. Mie Ayam    : Rp12.000" << endl;
    cout << "4. Nasi Goreng : Rp20.000" << endl;
    cout << "5. Nasi Padang : RP16.000" << endl;
    cout << "-----------------------------------" << endl;

    cout << "Silahkan pilih nomer menu : ";
    cin >> nomerMenu;
    cout << "Berapa porsi : ";
    cin >> jumlahPorsi;
    cout << "-----------------------------------" << endl;

    switch (nomerMenu)
    {
    case 1:
        hargaSatuanMenu = 18000;
        namaMakanan = "Bakso";
        break;
    case 2:
        hargaSatuanMenu = 15000;
        namaMakanan = "Kwetiau";
        break;
    case 3:
        hargaSatuanMenu = 12000;
        namaMakanan = "Mie Ayam";
        break;
    case 4:
        hargaSatuanMenu = 20000;
        namaMakanan = "Nasi Goreng";
        break;
    case 5:
        hargaSatuanMenu = 16000;
        namaMakanan = "Nasi Padang";
        break;

    default:
        menuValid = false;
        break;
    }

    totalHarga = hargaSatuanMenu * jumlahPorsi;

    if (menuValid == true)
    {
        cout << "=== PESANAN KAMU ===" << endl;
        cout << "Nama makanan = " << namaMakanan << endl;
        cout << "Harga satuan = " << hargaSatuanMenu << endl;
        cout << "Jumlah Porsi = " << jumlahPorsi << endl;
        cout << "Total harga  = " << totalHarga << endl;
    }
    else
    {
        cout << "Nomer menu yang kamu masukkan tidak ada" << endl;
    }

    return 0;
}