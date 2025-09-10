#include <stdio.h>
#include <stdlib.h>

int compare_int_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compare_int_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int pares[N], impares[N];
    int num_pares = 0, num_impares = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            pares[num_pares++] = num;
        } else {
            impares[num_impares++] = num;
        }
    }

    qsort(pares, num_pares, sizeof(int), compare_int_asc);
    
    qsort(impares, num_impares, sizeof(int), compare_int_desc);
    
    for (int i = 0; i < num_pares; i++) {
        printf("%d\n", pares[i]);
    }

    for (int i = 0; i < num_impares; i++) {
        printf("%d\n", impares[i]);
    }

    return 0;
}
