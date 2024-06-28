#include <stdio.h>
#define TADULTE 22.7
#define TENFANT 10.75
#define TFAMILLE 57.80
/*float prixEntree(int adultes, int enfants) {
    float sommeFamille = 0;
    float sommeSans = 0;
    sommeSans = adultes*TADULTE + enfants*TENFANT5ANS;
    if (adultes >= 2 && enfants >= 3){
        sommeFamille += TFAMILLE + (adultes - 2)*TADULTE + (enfants - 3)*TENFANT5ANS;
        if (sommeFamille < sommeSans){return sommeFamille;}}
    return sommeSans;

}*/
float prixEntree (int adu, int enf){
    int adufam;
    int enffam;
	float sans=adu*22.7+enf*10.75;
	if (adu-2<0){adufam =0;}
	else {adufam=adu-2;}
	if (enf-3<0){enffam =0;}
	else {enffam=enf-3;}
	float avec= TFAMILLE + (adufam)*TADULTE+(enffam)*TENFANT;
	
	if (avec<sans){return avec;}
	else {return sans;}
}

int main() {
    printf("%.2f\n", prixEntree(2,3));
    printf("%.2f\n", prixEntree(2,2));
    printf("%.2f\n", prixEntree(2,1));
    printf("%.2f\n", prixEntree(1,3));
    return 0;
}