#include <stdio.h>

void echange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tri_croissant(int *a, int *b) {
    if (*a > *b) {
        echange(a, b);
    }
}

void tri_3(int *a, int *b, int *c) {
    tri_croissant(a, b);
    tri_croissant(a, c);
    tri_croissant(b,c);
}


int main() {
    int a = 3;
    int b = 1;
    int c = 2;
    echange(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    tri_3(&a, &b, &c);
    printf("a: %d\nb: %d\nc: %d", a, b,c);
}