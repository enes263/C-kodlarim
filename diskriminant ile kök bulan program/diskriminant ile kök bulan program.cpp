#include <stdio.h>
#include <math.h>
int main() {
    // Katsayıları tanımla
    double a, b, c;

    // Kullanıcıdan katsayıları al
    printf("a katsayisini girin: ");
    scanf("%lf", &a);

    printf("b katsayisini girin: ");
    scanf("%lf", &b);

    printf("c katsayisini girin: ");
    scanf("%lf", &c);

    // Diskriminant (delta) hesapla
    double delta = b * b - 4 * a * c;

    // Kökleri hesapla ve ekrana yazdır
    if (delta > 0) {
        // İki gerçek kök var
        double kok1 = (-b + sqrt(delta)) / (2 * a);
        double kok2 = (-b - sqrt(delta)) / (2 * a);
        printf("Iki gercek koku vardir: %.2lf ve %.2lf\n", kok1, kok2);
    }
    else if (delta == 0) {
        // İki kök eşit ve reel
        double kok = -b / (2 * a);
        printf("Iki esit ve reel kok vardir: %.2lf\n", kok);
    }
    else {
        // İki karmaşık kök var
        double gercekKisim = -b / (2 * a);
        double karmaKisim = sqrt(-delta) / (2 * a);
        printf("Iki karma kok vardir: %.2lf + %.2lfi ve %.2lf - %.2lfi\n", gercekKisim, karmaKisim, gercekKisim, karmaKisim);
    }

    return 0;
}