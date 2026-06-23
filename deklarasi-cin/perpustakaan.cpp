#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jumlahBuku, jumlahRakBuku, jumlahMeja, jumlahKursi;
    string namaPerpustakaan, alamat;

    cout << "=== Data Perpustakaan Anda ===" << endl;

    cout << "Nama Perpustakaan : ";
    getline(cin, namaPerpustakaan);

    cout << "Alamat            : ";
    getline(cin, alamat);

    cout << "Jumlah buku yang tersedia : ";
    cin >> jumlahBuku;

    cout << "Jumlah rak buku           : ";
    cin >> jumlahRakBuku;

    cout << "Jumlah meja               : ";
    cin >> jumlahMeja;

    cout << "Jumlah kursi              : ";
    cin >> jumlahKursi;

    cout << "\n=== Hasil Output ===" << endl;

    cout << "Nama & Alamat   : " << namaPerpustakaan << " - " << alamat << endl;
    cout << "Jumlah buku     : " << jumlahBuku << endl;
    cout << "Jumlah rak buku : " << jumlahRakBuku << endl;
    cout << "Jumlah meja     : " << jumlahMeja << endl;
    cout << "Jumlah kursi    : " << jumlahKursi << endl;

    cin.ignore();
    cin.get();
    return 0;
}