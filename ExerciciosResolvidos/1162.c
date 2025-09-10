#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int L;
        scanf("%d", &L);

        int vagao[L];
        for (int i = 0; i < L; i++) {
            scanf("%d", &vagao[i]);
        }

        int swaps = 0;

        for (int i = 0; i < L - 1; i++) {
            for (int j = 0; j < L - 1 - i; j++) {
                if (vagao[j] > vagao[j + 1]) {
                    int temp = vagao[j];
                    vagao[j] = vagao[j + 1];
                    vagao[j + 1] = temp;
                    swaps++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
