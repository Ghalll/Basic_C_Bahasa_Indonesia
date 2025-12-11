/* pengulangan do-while loop adalah pengulangan yang belum diketahui jumlahnya.
    bentuk umum do-while loop : 
    do {
        // blok perintah yang akan diulang
    } while (kondisi);
*/

#include<stdio.h>
int main ()
{
/* Kamus : */
  int i=0;
 /* Algoritma */
 do  {
     printf ("Saya senang belajar bahasa C \n");
     i++;
 } while (i<5);
  return 0;
}