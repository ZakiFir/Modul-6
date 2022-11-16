#include <stdio.h>
int main(){
    int n1, n2, angka, i;
    scanf("%d %d", &n1, &n2);
    if(n1!=n2){
        printf("Jumlah tidak sama");
    }else{
    int baris1[n1];int baris2[n2];
    for(i = 0; i < n1; i++){
        scanf("%d", &baris1[i]);} 
    for (i = 0; i < n2; i++){
        scanf("%d", &baris2[i]);} 
    for(i = 0; i < n1; i++){
        angka = baris1[i] * baris2[i];
        printf("%d ", angka);}
    }
}