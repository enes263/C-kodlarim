#include <iostream>

int main() {
    // İki sayıyı belirle
    int sayi1 = 15;
    int sayi2 = 30;

    // En küçük ortak böleni (EBÖB) bulmak için kullanılan değişken
    int ebob = 1;

    // Bir sayıyı başlat
    int k = 1;

    // Sayi1 ve sayi2'den küçük veya eşit olduğu sürece döngüyü çalıştır
    while (k <= sayi1 && k <= sayi2) {
        // Eğer k, sayi1 ve sayi2'nin böleni ise
        if (sayi1 % k == 0 && sayi2 % k == 0) {
            // ebob'u güncelle
            ebob = k;
        }
        // k değerini bir arttır
        k++;
    }

    // Sonucu ekrana yazdır
    std::cout << "EBOB(" << sayi1 << ", " << sayi2 << ") = " << ebob << std::endl;

    return 0;
}





