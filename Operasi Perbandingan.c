/* // # Operasi Perbandingan 
?   Hasil dari suatu perbandingan adalah nilai bolean (true atau false). 

    *Daftar operator relasional (perbandingan) dalam bahasa C dan artinya:
-       <     Lebih kecil
-       >     Lebih besar
-       !=    Tidak sama dengan
-       ==    Sama dengan
*/

#include<stdio.h>
int main ()
{/* Kamus */
  int X=5;
  int Y=8;
  /* Program */
  printf ("Hasil X < Y  : %d \n",  X < Y);
  printf ("Hasil X > Y  : %d \n",  X > Y);
  printf ("Hasil X <= Y : %d \n",  X <= Y );
  printf ("Hasil X >= Y : %d \n",  X >= Y );
  printf ("Hasil X == Y : %d \n", X == Y ); /*operator kesamaan : ==*/
  printf ("Hasil X != Y : %d \n", X != Y); /*operator ke-tidak-samaan:!=*/

  printf ("Hasil X == X : %d \n", X == X ); /*operator kesamaan: ==*/
  printf ("Hasil X != X : %d \n",X != X); /*operator ke-tidak-samaan:!=*/

   return 0;
}