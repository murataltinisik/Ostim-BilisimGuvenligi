#include <stdio.h>

int main() {
    int limit = 5;
    int enteredValue, correctValue = 53;

    printf("0-100 arasında bir değer giriniz: ");
    scanf("%d", &enteredValue);

    while (enteredValue >= 0) {
        if (enteredValue >= 0 && enteredValue <= 100) {
            if (limit == 0) {
                printf("limitinizi doldurdunuz, tekrar deneyin.");
                break;
            }

            if (enteredValue > correctValue)
            {
                limit -= 1;
                printf("\nDaha Küçük bir sayı giriniz!");
            }
            else if (enteredValue < correctValue)
            {
                limit -= 1;
                printf("\nDaha büyük bir sayı giriniz!");
            }
            else if (enteredValue == correctValue)
            {
                printf("Tahmin Başarılı");
                break;
            }

            printf("\nKALAN CAN: ");
            printf("%d", limit);
            printf("\n");

            printf("\n0-100 arasında bir değer giriniz: ");
            scanf("%d", &enteredValue);
        }
        else {
            printf("0-100 arası bir değer giriniz.");
            break;
        }
    }

    return 0;
}