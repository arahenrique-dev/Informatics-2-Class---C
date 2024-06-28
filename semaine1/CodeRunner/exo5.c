#include <stdio.h>
#include <assert.h>
#include <math.h>

int discriminant(int a, int b, int c) {
    return (b*b) - (4*a*c);
};
void afficheRacines(int a, int b, int c) {
    float delta = discriminant(a,b,c);
    if (delta < 0) {printf("Pas de racine reelle\n");}
    else {
        if (delta == 0) {printf("La racine double est %.2f\n", ((-b*1.0)/(2*a)));}
        else {
            printf("Les deux racines sont %.2f et %.2f\n", (-b+sqrt(delta))/ (2*a), (-b-sqrt(delta))/ (2*a));
        }
    }
};

int main() {
    assert(discriminant(4, 4, 1) == 0); //0
    assert(discriminant(4, 6, 1) == 20); //20
    assert(discriminant(-7, -5, -1) == -3); //-3
    afficheRacines(4, 4, 1);
    printf("\n");
    afficheRacines(4, 6, 1);
    printf("\n");
    afficheRacines(-7, -5, -1);
};