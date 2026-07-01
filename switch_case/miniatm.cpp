#include <iostream>
using namespace std;

int main()
{
    int pinAtm = 123456;
    int saldo = 500000;
    int inputPin, nominalTarik, nominalSetor, nomerMenu;
    int saldoAkhir = 0;

    cout << "===== MINI ATM TEGUH =====" << endl;
    cout << "Masukkan pin kamu untuk memulai : ";
    cin >> inputPin;

    if (inputPin == pinAtm)
    {
        cout << "===== PILIH MENU ====" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Setor Tunai" << endl;
        cout << "3. Tarik Tunai" << endl;
        cout << "4. keluar" << endl;
        cout << "---------------------" << endl;
        cout << "Pilih nomer yang kamu inginkan : ";
        cin >> nomerMenu;

        switch (nomerMenu)
        {
        case 1:
            cout << "Saldo anda saat ini berjumlah : Rp" << saldo << endl;
            break;
        case 2:
            cout << "==== SETOR TUNAI ====" << endl;
            cout << "Saldo anda saat ini berjumlah Rp" << saldo << endl;
            cout << "Masukkan nominal setor : ";
            cin >> nominalSetor;
            cout << "---------------------" << endl;

            if (nominalSetor >= 0)
            {
                saldoAkhir = saldo + nominalSetor;
                cout << "Berhasil setor sebesar Rp" << nominalSetor << endl;
                cout << "Saldo anda bertambah menjadi Rp" << saldoAkhir << endl;
            }
            else
            {
                cout << "Nominal setor harus lebih dari 0" << endl;
            }

            break;
        case 3:
            cout << "==== TARIK TUNAI ====" << endl;
            cout << "Saldo anda saat ini berjumlah Rp" << saldo << endl;
            cout << "Masukkan nominal penarikan : ";
            cin >> nominalTarik;
            cout << "---------------------" << endl;

            if (nominalTarik >= 0)
            {
                saldoAkhir = saldo - nominalTarik;
                cout << "Berhasil menarik saldo sebesar Rp" << nominalTarik << endl;
                cout << "Saldo anda berkurang menjadi Rp" << saldoAkhir << endl;
            }
            else
            {
                cout << "Nominal tarik harus lebih dari 0" << endl;
            }
            break;
        case 4:
            cout << "=======================================" << endl;
            cout << "Terimakasih telah menggunakan ATM TEGUH" << endl;
            cout << "=======================================" << endl;
            break;
        default:
            cout << "Nomer menu yang kamu masukkan tidak valid!!!" << endl;
            break;
        }
    }
    else
    {
        cout << "PIN yang kamu masukkan salah!!" << endl;
    }

    return 0;
}