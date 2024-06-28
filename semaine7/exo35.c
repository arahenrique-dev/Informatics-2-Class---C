#include <stdio.h>
#define NB_PLANETES 8

typedef struct  {
    char nom[10];
    float densite;
    float distance_soleil;
    int nb_satellites;
} planete;

void affichePlanete(planete planete){
    printf("Nom : %s\nDensité : %.2f\nDistance du Soleil : %.2f\nNº Satelllites : %d\n\n", planete.nom, planete.densite, planete.distance_soleil, planete.nb_satellites);
}

void afficheToutesPlanetes(planete planetes[NB_PLANETES], int taille){
    for (int i = 0; i < taille; i++) {
        affichePlanete(planetes[i]);
    }
}

void modifieDensite(planete *planetes, float densite){
    planetes->densite = densite;
}
int main(){
    planete systemeSolaire[NB_PLANETES] ={{"Mercure", 5.42, 58, 0},{"Venus", 5.25, 108.2, 0},{"Terre", 5.52,149.6,1},{"Mars",3.94,227.9,2},{"Jupiter",1.314,778.3,16},{"Saturne",0.69,1427,17},{"Uranus",1.19,2869,15},{"Neptune",1.6,4496,2}};
    affichePlanete(systemeSolaire[3]);
    afficheToutesPlanetes(systemeSolaire, 8);
    modifieDensite(&systemeSolaire[0], 3.8);
    affichePlanete(systemeSolaire[0]);
    return 0;
}