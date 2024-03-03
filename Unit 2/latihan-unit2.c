#include <stdio.h>

int transaksi, nominal, pengeluaran;

int main(){
    
    printf ("Masukan jumlah transaksi : ");
    scanf ("%d", &transaksi);

    if (transaksi <= 0){
        printf ("Tidak ada transaksi hari ini");
    } else {
        for(int i = 1; i <= transaksi; i++){
            printf ("Masukan nominal transaksi ke %d : ", i);
            scanf ("%d", &nominal);
            pengeluaran = pengeluaran + nominal;
        }
        printf ("Total pengeluaran hari ini : %d", pengeluaran);
    }
    return 0;
}
