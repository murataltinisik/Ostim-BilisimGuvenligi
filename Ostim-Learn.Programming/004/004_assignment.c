#include <stdio.h>

int main()
{
    int soilStatus, fadedStatus, searStatus;

    printf("Toprağın Kurumu (0/1): ");
    scanf("%d", &soilStatus);

    if (soilStatus == 1) {
        printf("Yapraklar Solmuş mu (0/1): ");
        scanf("%d", &fadedStatus);

        if (fadedStatus == 1) {
            printf("BOL SU VER");
        }else {
            printf("NORMAL SU VER");
        }
    } else {
        printf("Yapraklar Sararmış mı (0/1): ");
        scanf("%d", &searStatus);

        if (searStatus == 1) {
            printf("FAZLA SULANMIS");
        }else {
            printf("SULAMAYA GEREK YOK");
        }
    }

    return 0;
}