#include<stdio.h>
#include <string.h>
int  main(){
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int kode, pesan, x, i=0, j=0;
    kode = strlen(asli);
    pesan = strlen(palsu);
    if(kode != pesan){
        printf("Panjang kalimat berbeda, pesan palsu");
    }else{
        for(x = 0; x < kode; x++){
            if(asli[x]==palsu[x]){
                printf("*");
                i++;
            }else{
                printf("#");
                j++;
            }    
        }
        printf("\n* = %d", i);
        printf("\n# = %d", j);
    if(i >= j){
        printf("\nPesan Asli");
    }else if(i < j){
        printf("\nPesan Palsu");
    }
    }
}