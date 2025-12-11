/* // # mendefenisikan konstanta 
?   konstanta adalah sebuah variabel yang tidak dapat diubah nilai dan namanya
    * ada 2 cara mendefinisikan konstanta
    - dengan keyword `#define`, tapi tidak memiliki tipe data. tergantung pada nilai yang diberikan. dan tanpa assigment.
    - dengan keyword `const`.  mendeklarasikan konstanta dengan tipe data yang jelas. 
*/

#include<stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415
int main ()
{/* Kamus */
  const int maks=3;
  const float param =2.5;
  const char cc = 65 ;
  const char cA = 'A' ;
 /* Algoritma */
  printf ("PI  = %6.2f\n", pi);
  printf ("NOL  = %d\n", NOL);
  printf ("SATU  = %d\n", SATU);
  printf ("FALSE  = %d\n", FALSE);
  printf ("maks  = %d\n", maks);
  printf ("param  = %f\n", param);
  printf ("cc  = %c\n", cc);
  printf ("cA  = %c\n", cA);
  printf ("3\n"); /*tanpa memakai nama, tidak disarankan */
  return 0;
}
