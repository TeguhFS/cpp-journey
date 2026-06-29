#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 5;
    bool hasil;

    // not:! and:& or:|

    // not
    hasil = !(a != b);
    cout << hasil << endl;

    // and : jika salah satu false maka false
    hasil = (a == b) and (a >= b);
    cout << hasil << endl;
    hasil = (a == b) and (a < b);
    cout << hasil << endl;
    hasil = (a < b) && (a >= b);
    cout << hasil << endl;
    hasil = (a < b) && (b > a);
    cout << hasil << endl;

    // or : jika salah satu true maka true
    hasil = (a == b) or (a >= b);
    cout << hasil << endl;
    hasil = (a == b) or (a < b);
    cout << hasil << endl;
    hasil = (a < b) || (a >= b);
    cout << hasil << endl;
    hasil = (a < b) || (b > a);
    cout << hasil << endl;

    cin.get();
    return 0;
}