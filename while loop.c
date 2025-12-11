/* pengulangan while loop adalah pengulangan yang belum diketahui jumlahnya.
    bentuk umum while loop : 
    while (kondisi){
        // blok perintah yang akan diulang
    }
*/

#include <stdio.h>
int main ()
{
/* Kamus : */
 int i=0;
/* Algoritma */
 while (i<3) { /* program diulang selama nilai i < 3 */
     printf ("Saya senang belajar bahasa C \n");
     i++;
 }
 return 0;

}