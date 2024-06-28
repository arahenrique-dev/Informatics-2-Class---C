#include <stdio.h>
#include <assert.h>
int jours(int proliferation_pers, int population, float pourcentage) {
	int jours = 0;
	int pers_inf = 1;
	while ((pourcentage / 100) * population > pers_inf) {
		pers_inf += proliferation_pers * pers_inf;
		jours += 1;
	}
	return jours;
}

float pourcentage(int proliferation_pers, int population, int jours) {
	int pers_inf = 1;
	for (int i = 0; i < jours; i++) {
		pers_inf += proliferation_pers * pers_inf;
	}
	float pourcentage = (pers_inf*1.0) / 100;
	if (pourcentage > 100) {return 100;}
	else {return pourcentage;}
	
}

int main() {
	assert(jours(5, 10000, 100.00) == 6);
	assert(jours(5, 10000, 50.00) == 5);
	assert(jours(5, 10000, 25.00) == 5);
	assert(jours(5, 10000, 10.00) == 4);
	
	printf("%.2f\n", pourcentage(5, 10000, 2));
	printf("%.2f\n", pourcentage(5, 10000, 3));
	printf("%.2f\n", pourcentage(5, 10000, 4));
	printf("%.2f\n", pourcentage(5, 10000, 5));
	printf("%.2f\n", pourcentage(5, 10000, 6));
	
}
