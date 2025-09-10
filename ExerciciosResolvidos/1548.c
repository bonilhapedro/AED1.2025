#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nota;
    int posicao;
} Aluno;

int compare(const void *a, const void *b) {
    return ((Aluno*)b)->nota - ((Aluno*)a)->nota;
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int M;
        scanf("%d", &M);

        Aluno alunos[M];
        
        for (int i = 0; i < M; i++) {
            scanf("%d", &alunos[i].nota);
            alunos[i].posicao = i;
        }

        qsort(alunos, M, sizeof(Aluno), compare);

        int nao_mudaram = 0;
        for (int i = 0; i < M; i++) {
            if (alunos[i].posicao == i) {
                nao_mudaram++;
            }
        }

        printf("%d\n", nao_mudaram);
    }
    
    return 0;
}
