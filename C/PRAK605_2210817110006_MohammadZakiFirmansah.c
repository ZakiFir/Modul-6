#include <stdio.h>
int main(){
    int Matriks_A[10][10], Matriks_B[10][10], Matriks_AXB[10][10];
    int i, j, k, n, jumlah = 0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &Matriks_A[i][j]);
            }
        }
    printf("Matriks B\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &Matriks_B[i][j]);
            }
        }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < n; k++){
                jumlah = jumlah + Matriks_A[i][k] * Matriks_B[k][j];
            }
            Matriks_AXB[i][j] = jumlah;
            jumlah = 0;
            }
        }
    printf("Matriks AXB\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", Matriks_AXB[i][j]);
            }
        printf("\n");}
}