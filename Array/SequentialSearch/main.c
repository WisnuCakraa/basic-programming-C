#include <stdio.h>

int main()
{
  int i;
  int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
  int X = 8; /* indek di mana Tab[max] bernilai maksimum */

  /* Algoritma sequential search paling sederhana */
  /* program berhenti pada indeks I di mana nilai diketemukan */
  i = 0;
  while ((Tab[i] != X) && (i < 9))
  {
    i++;
  } /* Tab[i] == X atau i==9 */
  if (Tab[i] == X)
  {
    printf("indeks bernilai X = %d", i);
  }
  else
  {
    printf("Nilai tidak diketemukan");
  }
  return 0;
}