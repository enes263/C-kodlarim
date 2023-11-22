#include <iostream>
using namespace std;

int main() {
    int dizi1[2][3] = { {1, 2, 3}, {5, 6, 7} };  
    int dizi2[2][3] = { {-1, 2, 3}, {3, 6, 7} };
    int toplam[2][3];

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            toplam[i][j] = dizi1[i][j] + dizi2[i][j];
        }
    }

    cout << "2 dizinin toplamý =" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << toplam[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}