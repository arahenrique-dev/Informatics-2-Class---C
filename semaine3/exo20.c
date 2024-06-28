#include <stdio.h>
#include <math.h>

int discriminant(int a,int b,int c) {
    int delta = b*b - 4*a*c;
    return delta;
}

int nb_racines_delta(int a,int b,int c, int *nb_rac) {
    if (discriminant(a,b,c) == 0) {
        *nb_rac = 1;
    } 
    else if (discriminant(a,b,c) > 0) {
        *nb_rac = 2;
    } 
    else {
        *nb_rac = 0;
    } 
    return discriminant(a,b,c);
}

int racines(int a,int b,int c, int *nb_rac, float* rac1, float* rac2) {
    int delta = nb_racines_delta(a,b, c,nb_rac);
    if (*nb_rac == 2) {
        *rac1 = (-b+sqrt(delta))/(2*a);
        *rac2 = (-b-sqrt(delta))/(2*a);
    }
    else if (*nb_rac == 1) {
        *rac1 = -b*1.0/(2*a);
        *rac2 = *rac1;
    }
    return *nb_rac;
}

int main(){
   int a, b, c;
   int nb_rac; 
   float rac1, rac2;
  
   printf("Entrez les coefficients a (!= 0) b et c du polynome :\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
  
   printf("valeur de delta : %d\n", discriminant(a, b, c));
   nb_rac = racines(a,b,c,&nb_rac,&rac1,&rac2);
   if (nb_rac == 2){
      printf("Le polynome a 2 racines : %.3f et %.3f\n", rac1, rac2);
   }
   if (nb_rac == 1){
      printf("Le polynome a 1 racine double : %.3f\n", rac1);
   }
   if (nb_rac == 0){
      printf("Le polynome n'a pas de racine reelle.\n");
   }
   return 0;
}