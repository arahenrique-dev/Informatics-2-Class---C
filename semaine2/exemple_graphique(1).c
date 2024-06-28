#include <cini.h>
void diagonale (int x){
	for (int i =0; i <x; i++){
		CINI_draw_pixel(i,i,"maroon");
	};
}

void carre (int l, int x, int y){
	for (int i=0; i<=l;i++){
		CINI_draw_pixel(x+i,y, "blue");
		CINI_draw_pixel(i+x,l + y, "green");
		CINI_draw_pixel(x,i + y, "red");
		CINI_draw_pixel(l +x,i + y, "black");
	}
}

void carres_remontant (int l, int x, int y){
	for (int i=0; i < 6; i++){
		carre(l, x-(20*i), y-(20*i));
	}
}

int main() {
  
  CINI_open_window(400, 300, ":)");
  CINI_fill_window("#ffffff");
  
  CINI_draw_pixel(199, 200, "#FFDD700");   /* affiche pt coord x=199, y=200*/
  CINI_draw_pixel(200, 200, "#FFDD700");   /* affiche pt coord x=200, y=200*/
  CINI_draw_pixel(201, 200, "#FFDD700");   /* affiche pt coord x=201, y=200*/
  diagonale (300);
  carre(100, 10, 100);
  carres_remontant (100, 200, 150);
  CINI_loop();
  return 0;
}
