1.
#include <stdio.h>

int main() {
  int i;

  printf("Masukkan bilangan integer: ");
  scanf("%d", &i);

  if (i == 0) {
    printf("Bilangan i adalah nol.\n");
  } else {
    if (i > 0) {
      printf("Bilangan i adalah bilangan bulat positif.\n");
    } else {
      printf("Bilangan i adalah bilangan bulat negatif.\n");
    }
  }

  return 0;
}



2.
#include <stdio.h>

int main() {
  int nomorHari;

  // Membaca input nomor hari
  printf("Masukkan nomor hari (1-7): ");
  scanf("%d", &nomorHari);

  // Validasi nomor hari
  if (nomorHari < 1 || nomorHari > 7) {
    printf("Masukan nomor hari tidak tepat.\n");
    return 1;
  }

switch (nomorHari) {
  case 1:
    printf("Senin\n");
    break;
  case 2:
    printf("Selasa\n");
    break;
  case 3:
    printf("Rabu\n");
    break;
  case 4:
    printf("Kamis\n");
    break;
  case 5:
    printf("Jumat\n");
    break;
  case 6:
    printf("Sabtu\n");
    break;
  case 7:
    printf("Minggu\n");
    break;
  }

  return 0;
}



3.
#include <stdio.h>

int main() {
  int nomorBulan;

  // Membaca input nomor bulan
  printf("Masukkan nomor bulan (1-12): ");
  scanf("%d", &nomorBulan);

  // Validasi nomor bulan
  if (nomorBulan < 1 || nomorBulan > 12) {
    printf("Masukan nomor bulan tidak tepat.\n");
    return 1;
  }

  // Menentukan nama bulan
  switch (nomorBulan) {
    case 1:
      printf("Januari\n");
      break;
    case 2:
      printf("Februari\n");
      break;
    case 3:
      printf("Maret\n");
      break;
    case 4:
      printf("April\n");
      break;
    case 5:
      printf("Mei\n");
      break;
    case 6:
      printf("Juni\n");
      break;
    case 7:
      printf("Juli\n");
      break;
    case 8:
      printf("Agustus\n");
      break;
    case 9:
      printf("September\n");
      break;
    case 10:
      printf("Oktober\n");
      break;
    case 11:
      printf("November\n");
      break;
    case 12:
      printf("Desember\n");
      break;
  }

  return 0;
}


4.
#include <stdio.h>

int main() {
  float R1, R2, R3, totalTahanan;

  // Membaca input nilai tahanan
  printf("Masukkan nilai R1: ");
  scanf("%f", &R1);
  printf("Masukkan nilai R2: ");
  scanf("%f", &R2);
  printf("Masukkan nilai R3: ");
  scanf("%f", &R3);

  // Validasi nilai tahanan
  if (R1 < 0 || R2 < 0 || R3 < 0) {
    printf("Masukan tahanan tidak boleh negatif.\n");
    return 1;
  }

  totalTahanan = R1 + R2 + R3;

  printf("Total tahanan rangkaian seri: %.2f \n", totalTahanan);

  return 0;
}



5.
#include <stdio.h>

int main() {
  int a, b, c;

  printf("Masukkan nilai a: ");
  scanf("%d", &a);
  printf("Masukkan nilai b: ");
  scanf("%d", &b);
  printf("Masukkan nilai c: ");
  scanf("%d", &c);

  if (a <= 0 || b <= 0 || c <= 0) {
    printf("Terdapat nilai yang bukan sisi segitiga.\n");
    return 1;
  }

  if (a == b && b == c) {
    printf("Segitiga Sama Sisi (a = b = c = %d)\n", a);
  } else if (a == b) {
    printf("Segitiga Sama Kaki (a = b = %d, c = %d)\n", a, c);
  } else if (a == c) {
    printf("Segitiga Sama Kaki (a = c = %d, b = %d)\n", a, b);
  } else if (b == c) {
    printf("Segitiga Sama Kaki (b = c = %d, a = %d)\n", b, a);
  } else {
    printf("Segitiga Sembarang (a = %d, b = %d, c = %d)\n", a, b, c);
  }

  return 0;
}



6.
#include <stdio.h>

int main() {
 int iA, iB, pilihan;
 float hasilFloat;
 int hasilInteger;

 printf("Masukkan nilai iA: ");
 scanf("%d", &iA);
 printf("Masukkan nilai iB: ");
 scanf("%d", &iB);

 printf("Masukkan pilihan operasi (a/b/c/d/e/f): ");
 scanf(" %c", &pilihan);

 if (pilihan < 'a' || pilihan > 'f') {
  printf("Bukan pilihan menu yang benar.\n");
  return 1;
 }

 switch (pilihan) {
  case 'a':
   hasilInteger = iA + iB;
   printf("%d + %d = %d\n", iA, iB, hasilInteger);
   break;
  case 'b':
   hasilInteger = iA - iB;
   printf("%d - %d = %d\n", iA, iB, hasilInteger);
   break;
  case 'c':
   hasilInteger = iA * iB;
   printf("%d * %d = %d\n", iA, iB, hasilInteger);
   break;
  case 'd':
   hasilFloat = (float)iA / iB;
   printf("%d / %d = %.2f\n", iA, iB, hasilFloat);
   break;
  case 'e':
   hasilInteger = iA / iB;
   printf("%d div %d = %d\n", iA, iB, hasilInteger);
   break;
  case 'f':
   hasilInteger = iA % iB;
   printf("%d mod %d = %d\n", iA, iB, hasilInteger);
   break;
 }

 return 0;
}