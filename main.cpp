#include <iostream>
using namespace std;

int main() {
    int x, y;
    int op;
    cout << "<---------------------------------->\n";
    cout << "Berikut Adalah Kalkulator Advanced\n";
    cout << "Masukkan Angka Pertama: ";
    cin >> x;
    cout << "Masukkan Angka Kedua: ";
    cin >> y;
    cout << "1. Pertambahan\n2. Perkalian\n3. Pengurangan\n4. Pembagian\nPilih Operator:";
    cin >> op;
    switch(op){
        case 1:
            cout << "Hasil dari " << x << "+" << y << " = " << x + y << "\n";
            break;
        case 2:
            cout << "Hasil dari " << x << "*" << y << " = " << x * y << "\n";
            break;
        case 3:
            cout << "Hasil dari " << x << "-" << y << " = " << x - y << "\n";
            break;
        case 4:
            cout << "Hasil dari " << x << "/" << y << " = " << x / y << "\n";
            break;
    }
    cout << "<---------------------------------->\n";
}