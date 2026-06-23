#include <iostream>
using namespace std;

int main()
{
    int umur;
    umur = 17;
    cout << "Umur = " << umur << endl;

    cout << "Merubah umur anda menjadi ";
    cin >> umur;
    cout << "Umur anda setelah di rubah adalah " << umur << endl;

    cin.get();
    return 0;
}