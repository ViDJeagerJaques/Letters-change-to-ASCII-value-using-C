#include<stdio.h>
int main () {
    char x;
    printf("=== Ini adalah program menukar huruf ke nilai ASCII ===\n");
    printf("== Masukkan huruf 'm' untuk keluar dari program ==\n");
    while (1){
        printf("Masukkan satu huruf :");
        scanf(" %c", &x);
        printf("Nilai ASCII untuk huruf %c adalah : %d\n", x, x);

        if (x == 'm'){
            printf("Terima kasih telah menggunakan program ini\n");
            break;
        }
    }
    return 0;
}