#include <stdio.h>

int main() {
    int number;

    printf("Sayı Giriniz:");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Sayı Çift'tir");
    }else {
        printf("Sayı Tek'tir");
    }
}