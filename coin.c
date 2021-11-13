/**
 * File     : coin.c
 * Nama     : Musthafa Kamal Faishal
 * NIM      : 24060118120042
 * Tanggal  : 13 November 2021
 * Deskripsi: Mengembalikan koin-koin yang total nilainya = A, tetapi jumlah koinnya minimum
*/

/* file header */
#include <stdio.h>

/* konstanta */
#define koin 9
#define mak 20

/* Deklarasi */
int x[koin] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100 }; // x : koin

// prosedur CoinExchange(input C : himpunan_koin, A : integer) ? himpunan_koin
// { mengembalikan koin-koin yang total nilainya = A, tetapi jumlah koinnya minimum }
void CoinExchange(int C, int A) 
{
  /* kamus lokal */
  int S[mak] = { 0 }; // S : himpunan_koin
  int i=0, k = 0, temp=0; // temp = Total(nilai semua koin di dalam S)

  /* algoritma */
  while ((temp != A) && (C != 0)) {
    C = C - x[i];

    if (temp + x[i] <= A) {
      S[k++] = x[i];
      temp = temp + x[i];
    } else {
      C = C + x[i];
      i++;
    }
  }

  if (S[koin] == koin) {
    printf("%d", S);
  } else {
    printf("");
  }

  for (i = 0; i < k; i++) { 
    printf("%d ", S[i]); 
  } 

  return; 
} 

/* driver */
int main(void)
{
  /* kamus */
  int uang;

  /* algoritma */
  scanf("%d", &uang); // membaca jumlah uang yang akan ditukar
  CoinExchange(uang, uang); // panggil function

  return 0;
}