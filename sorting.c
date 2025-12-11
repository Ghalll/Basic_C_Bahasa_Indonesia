/* // # Sorting adalah pengurutan data
 ?   dalam bahasa C ada beberapa metode sorting
 ?   diantaranya adalah Bubble Sort, Selection Sort, Insertion Sort, dll
 ?   pada contoh kali ini kita akan menggunakan metode Selection Sort
*/
#include<stdio.h>
int main (){
  
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };

  for (int i=0; i<9; i++ ){
     for (int k= i+1;k< 10; k++)  {
        if (Tab[k] < Tab[i]) {
          int temp= Tab[i];    
          Tab[i]= Tab[k];
          Tab[i] = temp;
        }
     } 
  }

  for (int i=0;i<10;i++) {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}