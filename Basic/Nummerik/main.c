#include <stdio.h>

int main()
{
  int a;
  float x;
  /* Program */
  printf("Contoh membaca dan menulis, ketik nilai integer: ");
  scanf("%d", &a); /* membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dg &a*/
  printf("Nilai yang dibaca : %d \n", a);

  printf("ketik nilai sebuah bilangan riil: ");
  scanf("%d", &a); /* membaca nilai a yang bertype integer*/
  printf("Nilai yang dibaca : %f \n", x);

  /* coba ketik : scanf ("%d", a);dan tuliskan nilainya. Apa akibatnya ?*/
  /* coba ketik : scanf ("%f", x);dan tuliskan nilainya. Apa akibatnya ?*/

  return 0;
}