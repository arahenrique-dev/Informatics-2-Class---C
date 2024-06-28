#include <stdio.h>
#include <stdlib.h>
#include "multi_ensembles.h"

  
/* Retourne un pointeur sur le premier element de valeur val, retourne NULL si aucun �l�ment n'a la valeur val */
element_t * Recherche_val(element_t *ensemble, int val) {
  element_t * current = ensemble;

  while (current != NULL) {
    if (current->valeur == val) {
      return current;
    }
    current = current->suivant;
  }
return NULL;
}

/* Ajoute l'element val en tete de l'ensemble s'il n'apparait pas dans l'ensemble, augmente sa frequence de 1 sinon */
element_t * Ajout_tete_ensemble(element_t *ensemble, int val, int freq) {
  element_t *current = ensemble;
  if (Recherche_val(current, val) == NULL){
      while (current != NULL) {
      current = current->suivant;
    }
    current = (element_t*) malloc(sizeof(element_t));
    current->valeur = val;
    current->frequence = freq;
    return current;
  }
  else {
    while (current->valeur != val) {
      current = current->suivant;
    }
    current = (element_t*) malloc(sizeof(element_t));
    current->frequence += freq;
    return current;
  }
  
 return NULL;
}

/*
  // Affche tous les elements d'un ensemble avec leur frequence
  void Affiche_ensemble(element_t *ensemble) {
    element_t *ptr = ensemble;
    
    while (ptr != NULL) {
      printf("val : %d, frequence : %d\n",ptr->valeur,ptr->frequence);
      ptr=ptr->suivant;
    }
  }

  // Saisie des n elements d'un ensemble
  element_t * Creation_ensemble(int n) {
    element_t *ensemble=NULL;
    
    int i = 0;
    int val;
    
    for (i=0; i < n; i++) {
      printf("Saisie d'un entier: ");
      scanf("%d",&val);
      ensemble=Ajout_tete_ensemble(ensemble,val,1);
    }
    return ensemble;
  }
*/

int main() {
  element_t * ensemble;
  int val;
  ensemble=NULL;
  for (val=1; val <=10; val++){
      ensemble=Ajout_tete_ensemble(ensemble,val,val);
  }
  Affiche_ensemble(ensemble);
}
