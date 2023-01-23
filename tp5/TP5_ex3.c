#include <stdio.h>
#include <MLV/MLV_all.h>



void drawcercle(int x,int y,int epaisseur){
	MLV_create_window("fenetre","reation",x,y);
	if (x>y){
		MLV_draw_filled_circle( x/2, y/2, y/2, MLV_COLOR_GHOST_WHITE);
		MLV_draw_filled_circle( x/2, y/2, (y/2)-epaisseur, MLV_COLOR_BLACK);
	}
	else{
		MLV_draw_filled_circle( x/2, y/2, x/2, MLV_COLOR_GHOST_WHITE);
		MLV_draw_filled_circle( x/2, y/2, (x/2)-epaisseur, MLV_COLOR_BLACK);
	}
	MLV_actualise_window();
	MLV_wait_seconds(15);
}

int main(void){
	int x;
	int y;
	int epaisseur;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	printf("Entrez l'epaisseur du cercle : ");
	scanf("%d",&epaisseur);

	drawcercle(x,y,epaisseur);


	
	return 0;
}