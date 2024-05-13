No : 1
a dan b


#include <stdio.h>

int sequential_search(int T[], int N, int X) {
    for (int i = 0; i < N; i++) {
        if (T[i] == X) {
            return i;  // Mengembalikan indeks jika ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;

    // a. Mencari X = 10
    int X = 10;
    int result = sequential_search(T, N, X);
    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d\n", X, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam tabel\n", X);
    }

    // b. Mencari X = 70
    X = 70;
    result = sequential_search(T, N, X);
    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d\n", X, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam tabel\n", X);
    }

    return 0;
}


No : 2
a dan b


#include <stdio.h>

int sequential_search_v2(int T[], int N, int X) {
    T[N] = X;  // Menambahkan X ke akhir tabel
    int i = 0;
    while (T[i] != X) {
        i++;
    }
    if (i < N) {  // Jika X ditemukan dalam tabel
        return i;
    } else {  // Jika X tidak ditemukan dalam tabel
        return -1;
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11, 0};  // Menambahkan slot tambahan untuk X
    int N = 20;

    // a. Mencari X = 15
    int X = 15;
    int result = sequential_search_v2(T, N, X);
    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d\n", X, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam tabel\n", X);
    }

    // b. Mencari X = 60
    X = 60;
    result = sequential_search_v2(T, N, X);
    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d\n", X, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam tabel\n", X);
    }

    return 0;
}
