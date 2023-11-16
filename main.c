#include <stdio.h>
#include <stdlib.h>
#define EMIR 10

int main() {
    int i;
    int max, min;
    int dizi[EMIR];

    printf("Lutfen %d kadar deger giriniz.\n", EMIR);

    for (i = 0; i < EMIR; i++) {
        scanf("%d", &dizi[i]);
    }

    max = min = dizi[0];

    for (i = 1; i < EMIR; i++) {  // 'Ý' harfini 'i' olarak düzeltin
        if (dizi[i] > max) {
            max = dizi[i];
        }
        if (dizi[i] < min) {
            min = dizi[i];
        }
    }

    printf("MAXIMUM DEGER : %d \n", max);
    printf("MINIMUM DEGER : %d \n", min);

    return 0;
}

