#include <stdio.h>
#include <stdlib.h>
#include "liste_entiers.h"

cellule_t * creerListe(int n) {
/* cree une liste de n entiers saisi par l'utilisateur
  renvoie l'adresse du premier element de la liste */
  int i;
  int val;
  cellule_t *tete=NULL;
  cellule_t *ptr;
  
  printf("Saisie des %d elements de la liste\n",n);
  for (i=0; i < n; i++) {
    printf("Element %d :",i+1);
    scanf("%d",&val);
    ptr=malloc(sizeof(cellule_t));
    ptr->donnee = val;
    ptr->suivant = tete;
    tete = ptr;
  }
  return tete;
}

void AfficherListInt(cellule_t *liste) {
  while (liste->suivant != NULL) {
    printf("%d\n", liste->donnee);
    liste = liste->suivant;
  }
  printf("%d\n", liste->donnee);
}

int nb_occurences(int val, cellule_t *liste) {
  int nb_occ = 0;
  while (liste != NULL) {
    if (liste->donnee == val) {
      nb_occ += 1;
    }
    liste = liste->suivant;
  }
  return nb_occ;
}

int tous_plus_grand(int val, cellule_t *liste) {
  while (liste != NULL) {
    if (liste->donnee < val) {
      return 0;
    }
    liste = liste->suivant;
  }
  return 1;
}

cellule_t* Maximum(cellule_t *liste) {
  cellule_t *plus_grand = liste;
  while (liste != NULL) {
    if (liste->donnee > plus_grand->donnee) {
      plus_grand = liste;
    }
    liste = liste->suivant;
  }
  return plus_grand;
}

int Renvoyer_val_element_pos(int pos, cellule_t* liste) {
  for (int i = 0; i < pos; i++) {
    liste = liste->suivant;
  }
  return liste->donnee;
}