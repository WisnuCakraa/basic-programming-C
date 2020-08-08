#include <stdio.h>

int main()
{
  int a;
  /* Program */
  printf("Contoh IF tiga kasus dengan tiga kalimat IF \n");
  printf("Ketikkan suatu nilai integer :");
  scanf("%d", &a);
  if (a > 0)
  {
    printf("Nilai a positif %d \n", a);
  }
  if (a == 0)
  {
    printf("Nilai Nol %d \n", a);
  }
  if (a > 0)
  {
    printf("Nilai a negatif %d \n", a);
  }
  return 0;
}