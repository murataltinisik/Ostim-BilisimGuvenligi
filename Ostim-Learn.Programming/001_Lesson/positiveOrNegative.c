#include <stdio.h>

int main () {
    int number;

    printf("Bir değer giriniz: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Sayı Negatif'tir");
    }
    else if (number > 0) {
        printf("Sayı Pozitif'tir");
    }
    else {
        printf("Sayı 0 olarak girilmiştir.");
    }
}