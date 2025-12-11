/* // # subprogram atau function
?   sama seperti bahasa program lainya

    *Sebuah fungsi terdiri dari komponen-komponen sebagai berikut:
    -Nama fungsi, akan dipakai untuk “memanggil” fungsi tersebut jika diperlukan.
    -Type kembalian, yang akan dipakai sebagai “kontrak” antara pemanggil dan fungsi.
    -Parameter (tidak harus ada), yang menjadi “modal” dari fungsi untuk melakukan komputasi.
    -Badan fungsi, yaitu deretan instruksi yang akan dieksekusi saat fungsi dipakai.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int add(int a, int b){    // nama fungsinya add. type kembalian int. parameter int a & b.
  return a + b;         // => ini badan fungsi yang mengembalikan nilai tambah int a dan b.
}

int inkremen(int a) {
  return a++;
}

int random (int MIN, int MAX){
    int result = 0;
    for (int i = 0; i < 5; i++){
      result = rand() % (MAX - MIN + 1) + MIN;
    }
    return result;
}

int main() {
  int x=10;
  int y=25;
  /* pemakaian/pemanggilan fungsi add */
  printf("Hasil penjumlahan x+y = %d\n", add(x,y)); 
  printf("Hasil penjumlahan 3+2 = %d\n", add(3,2));
  
  /* pemakaian/pemanggilan fungsi inkremen */
  printf("nilai x   : %d\n", x);
  printf("nilai x  setelah ditambah 1 : %d\n", inkremen(x));
  printf("nilai 5  setelah ditambah 1 : %d\n", inkremen(5));

  /* Pemakaian/pemnagilan fungsi random */
  srand(time(NULL));
  printf("hasil angka acak : %d\n",random(1,100));
 
  return 0;
}

