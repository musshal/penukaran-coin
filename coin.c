#include <stdio.h> 
#define koin 9 
#define mak 20 

//Deklarasi
// S : himpunan_koin
// x : koin

int x[koin] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100 }; 

//function CoinExchange(input C : himpunan_koin, A : integer) ? himpunan_koin
//{ mengembalikan koin-koin yang total nilainya = A, tetapi jumlah koinnya minimum }
void CoinExchange(int C, int A) 
{ 
// S : himpunan_koin
	int S[mak] = { 0 }; 
//temp = Total(nilai semua koin di dalam S)
	int i=0, k = 0, temp=0; 

//isilah algoritma sesuai notasi algoritmik di slide 
	
//mencetak hasil koin 
//if (?(nilai semua koin di dalam S) = A then
// return S
// else
// write(’’)
// endif

	for (i = 0; i < k; i++) { 
		printf("%d ", S[i]); 
	} 
	return; 
} 

int main(void) 
{ 

	int uang ; 
	scanf("%d", &uang); //memnbaca jumlah uang yang akan ditukar

	CoinExchange(uang, uang); //panmggil function 
	return 0; 
} 

