#include "liste_entiers.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  cellule_t *ma_liste = creerListe(5);
  AfficherListInt(ma_liste);
  printf("Nb Occ de 2 : %d\n", nb_occurences(2, ma_liste));
  printf("E plus grand: %d\n", tous_plus_grand(5, ma_liste));
  cellule_t *max = Maximum(ma_liste);
  printf("Max : %d\n", max->donnee);
  int pos = 3;
  printf("Valeur en Position %d : %d\n", pos, Renvoyer_val_element_pos(pos, ma_liste));
  
  return 0;
}