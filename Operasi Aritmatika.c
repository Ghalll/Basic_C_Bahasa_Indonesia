/* Operasi Perhitungan Matematika */

#include <stdio.h>
int main(){
  int x = 5;
  int y = 3;
  float a=5, b=8;

  printf("nilai tambah  : %d \n", x+y);
  printf("nilai kurang  : %d \n", x-y);
  printf("nilai kali    : %d \n", x*y);
  printf("nilai bagi    : %d \n", x/y);
  printf("nilai modul   : %d \n", x%y);

  printf ("Ini nilai a / b  : %5.2f \n", a/b );
  printf ("Ini nilai b / a  : %5.2f \n", b/a );
  return 0;
}