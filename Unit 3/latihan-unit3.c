#include <stdio.h>

int main(){
    int  a;

    printf ("Masukan jumlah array : ");
    scanf ("%d", &a);

    int array [a];

    printf ("Masukan nilai :\n");
    for (int i = 0; i < a; i++){
        scanf("%d", &array[i]);
    }

    int hasil = 0;
    for (int i = 0; i < a; i++){
        hasil = hasil + array[i];
    }

    printf ("Hasil penjumlahan array : %d", hasil);

    return 0;
}
