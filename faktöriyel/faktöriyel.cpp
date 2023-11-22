#include <iostream>
using namespace std;

int fakt(int x) {
    long long int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    float k;
    k = (static_cast<float>(fakt(5)) * fakt(7) * fakt(10)) / ((2 - fakt(4)) * (3 - fakt(5)));
    cout << "'k' degeriniz: " << k;
    return 0;
}