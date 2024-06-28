#include <stdio.h>


int indiceInsert(int tab[], int el, int nb, int taille){
    int index;
    for (int i = 0; i < taille; i++) {
        if (el == tab[i] || nb == 0) return -1;
        if (el > tab[i]&& el < tab[i+1]) {
            index = i;
            return index - 1;
        }
    }
    index = taille - 1;
    return index - 1;
}

int main () {
    int tab[5] = {2, 4, 6};
    printf("Primeiro : %d\n", indiceInsert(tab, 7, 3, 5));
    printf("Primeiro : %d\n", indiceInsert(tab, 4, 3, 5));

}