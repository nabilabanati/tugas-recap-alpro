# Unit 1

## Percobaan 2
- percobaan2a.c  
> Program tersebut menghasilkan error karena tidak menyertakan library <stdio.h>.

```c
#include <stdio.h>
```

- percobaan2b.c 

```c
printf(Alpro itu mudah!);
```
> Program tersebut error karena pada printf() dengan tipe data string tidak menggunakan (" ").

```c
printf("Alpro itu mudah!");
```

- percobaan2c.c 
> Percobaan tersebut error karena tidak menggunakan main() function, maka statment pada program tidak akan tereksekusi, main() function diakhri dengan return 0;

```c
#include <stdio.h>

int main(){
    printf("Alpro itu mudah!");
    return 0;
}
```


## Percobaan 3
- percobaan3a.c 
> Output :

```c
Baris pertamaBaris kedua
Baris ketiga
```

- percobaan3b.c 
> Output :

```c
Oh my, oh my God
예상했어 나
I was really hoping that he will come through
```
> Fungsi dari /n adalah membuat new line atau baris baru, jadi teks selanjutnya akan dimulai pada baris baru atau baris di bawahnya.

## Percobaan 5
- percobaan5a.c 
> Output :

```c
Masukan nama lengkap kamu:
Nabila Rizki Banati
Halo Nabila
```

- percobaan5b.c 
> Output :

```c
Masukan nama lengkap kamu: 
Nabila Rizki Banati
Halo Nabila Rizki Banati
```
> Perbedaan output dari kedua program tersebut yaitu pada line ke-3. Pada percobaan5a.c menggunakan fungsi scanf() yang membaca satu buah kata pertama pada teks yang dinputkan, pada percobaan5b.c menggunakan fungsi fgets() yang membaca semua kata atau satu baris pada teks yang diinputkan.

## Percobaan 8
> Fungsi dari titik yang diikuti oleh angka pada kode tersebut menentukan jumlah digit bilangan desimal di delakang koma yang akan ditampilkan saat mencetak nilai variabel phi.