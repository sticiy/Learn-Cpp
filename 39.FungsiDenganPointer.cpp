#include <iostream>

// Fungsi yang menerima dua parameter melalui pointer
void tambah(int* a, int* b, int* hasil) {
    *hasil = *a + *b;
}

int main() {
    int angka1 = 5, angka2 = 7, hasil;

    // Menggunakan pointer untuk memanggil fungsi
    tambah(&angka1, &angka2, &hasil);

    // Menampilkan hasil penambahan
    std::cout << "Hasil penambahan: " << hasil << std::endl;

    return 0;
}

