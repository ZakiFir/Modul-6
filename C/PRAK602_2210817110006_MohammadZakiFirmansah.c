#include <stdio.h>
int main(){
  int kolom, isi, j;
  scanf("%d", &kolom);
  int matrix[kolom];
    for (j = 0; j < kolom; j++) {
      scanf("%d", &isi);
      matrix[j] = isi;
  }      
      for (j = 0; j < kolom; j++) {
        printf("%d ", matrix[j] * (j + 1));
    }printf("\n");
}