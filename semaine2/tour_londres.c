#include <stdio.h>
#define ADULTE 22.7
#define ENF5A15 10.75
#define FAMILLE 57.80

float prixEntree (int adu, int enf){
    int adufam;
    int enffam;
	float sans=adu*22.7+enf*10.75;
	if (adu-2<0){adufam = adu % 2;}
	else {adufam=adu-2;}
	if (enf-3<0){enffam =enf % 3;}
	else {enffam=enf-3;}
	float avec = 57.8 + (adufam)*22.7+(enffam)*10.75;
	
	if (avec<sans){return avec;}
	else {return sans;}}

int main() {
    printf("%.2f\n", prixEntree(2,1));
    printf("%.2f\n", prixEntree(2,2));
    printf("%.2f\n", prixEntree(2,3));
    printf("%.2f\n", prixEntree(6,3));
    printf("%.2f\n", prixEntree(1,3));
    printf("%.2f\n", prixEntree(5,7));
    printf("%.2f\n", prixEntree(6,8));
    printf("%.2f\n", prixEntree(10,0));
    printf("%.2f\n", prixEntree(0,4));
    return 0;
}
