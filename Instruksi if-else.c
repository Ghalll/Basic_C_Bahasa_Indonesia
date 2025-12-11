/* # Instruksi if-else adadalah intruksi percabangan yang digunakan untuk mengeksekusi
     suatu blok kode dari dua kemungkinan blok kode berdasarkan
     kondisi yang diberikan.
    menuliskan 'Nilai a positif , nilai a', jika a >0
    menuliskan 'Nilai a negatif , nilai a', jika a <0 
*/
#include<stdio.h>
int main ()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF dua kasus \n");
  printf ("Ketikkan suatu nilai integer :");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  else /* a< 0 */
    {
      printf ("Nilai a negatif %d \n", a);
    }
  return 0;
}