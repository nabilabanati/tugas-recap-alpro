#include <stdio.h>

int sisi;

int keliling(int sisi){
    return 4 * sisi;
}

int luas(int sisi){
    return sisi * sisi;
}

int volume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    printf ("Masukan panjang sisi : ");
    scanf ("%d", &sisi);

    printf ("Keling persegi : %d\n", keliling(sisi));
    printf ("Luas persegi : %d\n", luas(sisi));
    printf ("Volume kubus : %d", volume(sisi));
}


