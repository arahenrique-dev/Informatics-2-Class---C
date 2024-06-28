#include <stdio.h>
#define VAL1 2
#define VAL2 7
#define VAL3 5
#define VAL4 9


void min_max(int a, int *min, int *max) {
    if (a < *min) {
        *min = a;
    }
    else if (a > *max) {
        *max = a;
    }
}

void stats (int a, int b, int c, int d, int*min, int *max, float* moyenne) {
    int valeurs[] = {a,b,c,d};
    int index = 4;
    for (int i = 0; i < 4; i++) {
        if (valeurs[i]<= 0) {
            index = i;
            break;
        }
    }

    int nb_valeurs = 0;
    int somme_tous = 0;
    for (int j = 0; j < index; j++) {
        nb_valeurs++;
        somme_tous += valeurs[j];
    }
    
    *max = 0;
    if (valeurs[0] <= 0) {
        *min = -1;
        *max = -1;
        *moyenne = -1;
    }
    else {
        int index = 4;
        for (int i = 0; i < 4; i++) {
            if (valeurs[i]== 0 || valeurs[i] < 0) {
                index = i;
                break;
            }
        }
        int nb_valeurs = 0;
        int somme_tous = 0;
        for (int j = 0; j < index; j++) {
            nb_valeurs++;
            somme_tous += valeurs[j];
            min_max(valeurs[j], min, max);
        }
        *moyenne = somme_tous*1.0 / nb_valeurs;
    }
}
/*for (int i = 0; i < 4; i++) {
            
            if (valeurs[i] <= 0) {break;}
            else {nb_valeurs++;}
        }
        for (int j = 0; j < nb_valeurs; j++) {
            somme_tous += valeurs[j];
            min_max(valeurs[j], min, max);
        }
        printf("Somme :%d, Nb Valeurs : %d\n", somme_tous, nb_valeurs);
        *moyenne = somme_tous*1.0 / nb_valeurs;
    }
    printf("Min : %d\nMax : %d\n Moyenne : %f\n", *min, *max, *moyenne); */

void afficher_resultat(float *moyenne, int *min, int *max) {
    int vals[] = {VAL1, VAL2,VAL3,VAL4};
    int somme = 0;
    for (int i = 0; i < 4; i++) {
        min_max(vals[i], min, max);
        somme += vals[i];
    }
    *moyenne = somme*1.0 / 4;
    printf("max = %d, min = %d, moy = %.2f\n",*max,*min,*moyenne);
}

int main() {
  float moy;
  int min, max;
  min = 3;
  max = 6;
  moy = 0;
  min_max(9, &min, &max);
  //printf("min = %d, max %d\n", min, max);
  
  /* vous devrez bien sur modifier les parametres d'appel de la fonction stats une fois cette derniere completee */
  stats(5,7,9,12, &min,&max,&moy);
  stats(1,-1,2,3, &min,&max,&moy);
  stats(-1,2,3,4, &min,&max,&moy);
  stats(9,4,-1,2, &min,&max,&moy);
  stats(13,9,6,-1, &min,&max,&moy);

  /* vous devrez bien sur modifier les parametres d'appel de la fonction afficher_resultat */
  int moyenne = 0.0;
  int plusPetit = VAL1;
  int plusGrand = 0;
  afficher_resultat(&moyenne, &plusPetit, &plusGrand);
  
  return 0;
}