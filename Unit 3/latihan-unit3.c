#include <stdio.h>

int  a;


int main(){

printf ("Masukan jumlah array : ");
scanf ("%d", &a);

int array [a];

printf ("Masukan nilai : ");
for (int i = 0; i < a; i++){
    scanf("%d", &array[i]);
}
}