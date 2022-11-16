#include <stdio.h>
int main(){
  int baris, kolom, isi, i, j;
  scanf("%d %d", &baris, &kolom);
  int matrix[baris][kolom];
    for (i = 0; i < baris; i++) {
      for (j = 0; j < kolom; j++) {
        scanf("%d", &isi);
        matrix[i][j] = isi;
      }
    }      
    for (i = 0; i < baris; i++) {
      for (j = 0; j < kolom; j++) {
        printf("%d ", matrix[i][j]);
      } printf("\n");
    }
}