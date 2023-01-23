#include <stdio.h>
#include <MLV/MLV_all.h>


void Elipse(int x,int y){
	MLV_create_window("fenetre","reation",x,y);
	MLV_draw_ellipse( x/2, y/2, x/2, y/2, MLV_COLOR_GHOST_WHITE);
	MLV_actualise_window();
	MLV_wait_seconds(15);
}

/*void Cercle(int x,int y){
	int l;
	if (x>y)
		l=y;
	else
		l=x;
	MLV_create_window("fenetre","reation",x,y);
	MLV_draw_circle( x/2, y/2, l/2, MLV_COLOR_GHOST_WHITE);
	MLV_actualise_window();
	MLV_wait_seconds(15);
}*/


int main(void){
	int x;
	int y;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	Elipse(x,y);
/*	Cercle(x,y);*/
	
	return 0;
}