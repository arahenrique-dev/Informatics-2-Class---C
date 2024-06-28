#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_VALEURS 50
#define VMIN -20
#define VMAX 20

int valeur_aleatoire(int min, int max)
{
  return rand()%(max-min +1)+min; 
}
void pos_neg_zero(int val, int *negatives, int *zeros, int *positives) {
    if (val == 0) {
      *zeros += 1;
    }
    else if (val > 0) {
      *positives+= 1;
    }
    else {
      *negatives += 1;
    }
}

int main(){
  /* initialisation du g�n�rateur de nombres al�atoires */
  srand(time(NULL));
  int i, val;
  int zeros = 0;
  int positives = 0;
  int negatives = 0;
  
  printf("Saisissez une suite de %d valeurs\n", NB_VALEURS);
   for (i = 0; i < NB_VALEURS; i++) {
      scanf("%d", &val);
      pos_neg_zero(val,&negatives, &zeros, &positives);
   }
  
   printf("%d valeurs negatives, %d valeurs positives, %d valeurs nulles.\n", negatives, positives, zeros);  
   return 0;
  
  return 0;
}