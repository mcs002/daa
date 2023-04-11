#include <iostream>
using namespace std;

int main(){
    float m, cm, inci;

    cout << "masukkan ukuran dalam meter: ";
    cin >> m;

    cm = m * 100;
    inci = m * 100 /1.54;

    cout << "ukuran dalam cm: " << cm << endl;
    cout << "ukuran dalam inci " << inci << endl;

    return 0;
}