#include <stdio.h>

int s, t, v;

int main(){

    printf ("Masukan jarak dan waktu : ");
    scanf ("%d %d", &s, &t);
    float kecepatan = (float) s / t;

    printf ("Masukan kecepatan dan waktu : ");
    scanf ("%d %d", &v, &t);
    float jarak = (float) v * t;

    printf ("Masukan jarak dan kecepatan : ");
    scanf ("%d %d", &s, &v);
    float waktu = (float) s / v;

    printf ("\nKecepatan:  %.2f\n", kecepatan);
    printf ("Jarak: %.2f\n", jarak);
    printf ("Waktu: %.2f\n", waktu);

    return 0;

}

