#include <stdio.h>

int main () {
    int number;

    printf("Bir sayı giriniz: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 10) {
        while (number <= 15) {
            if (number == 15) {
                printf("sayı 15'e tamamlandı ve döngü sonlandı.\n");
            } else {
                printf("%d", number);
                printf(". Murat ALTINIŞIK\n");
            }

            number++;
        }
    } else {
        printf("1-10 arası bir sayı giriniz");
    }

    return 0;
}