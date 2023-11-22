#include <iostream>
using namespace std;

double fakt(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int i, n, sayi;

    cout << "sayi miktari ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "sayi gir: ";
        cin >> sayi;
        cout << fakt(sayi) << endl;
    }

    return 0;
}