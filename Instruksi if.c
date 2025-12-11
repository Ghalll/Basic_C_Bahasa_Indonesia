/*  intruksi if adalah intruksi percabangan yang digunakan untuk mengeksekusi
     suatu blok kode jika kondisi tertentu terpenuhi (benar/true).
    # Instruksi if satu kasus
      menuliskan 'Nilai a positif , nilai a', jika a >0

*/
#include<stdio.h>
int 
main ()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF satu kasus \n");
  printf ("Ketikkan suatu nilai integer ");
  scanf ("%d", &a);
  if (a > 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  /* jika nilai a tidak positif maka program tidak melakukan apa-apa */
  return 0;
}