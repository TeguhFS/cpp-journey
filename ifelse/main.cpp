#include <iostream>
using namespace std;

int main()
{
    short angka;

    cout << "=== MASUKKAN ANGKA LEBIH DARI 10 DAN KURANG DARI 20 ===" << endl;
    cout << "Masukkan Angka : ";
    cin >> angka;

    if (angka >= 10 && angka <= 20)
    {
        cout << "Benar, angka yang kamu masukkan : " << angka << endl;
    }
    else
    {
        cout << "Angka yang anda masukkan salah karena melebihi kurang dari 10 dan lebih dari 20. Angka yang anda masukkan : " << angka << endl;
    }

    return 0;
}