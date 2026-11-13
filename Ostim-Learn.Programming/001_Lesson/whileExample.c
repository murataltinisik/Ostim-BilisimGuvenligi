#include <stdio.h>

int main() {
    int number;

    printf("Lütfen bir numara girin: ");
    scanf("%d", &number);

    while (number == 5) {
        printf("Murat ALTINIŞIK");
        scanf("%d", &number);
    }

    return 0;
}