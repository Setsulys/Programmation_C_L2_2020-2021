#include <stdio.h>
#include <MLV/MLV_all.h>


void cercleanim(int x,int y,int croissance){
	MLV_create_window("fenetre","reation",x,y);
	for (i=0;i<croissance;i++){
		if (x>y){
			MLV_draw_filled_circle( x/2, y/2, (y/4)+i, MLV_COLOR_GHOST_WHITE);
			MLV_wait_milliseconds(100);
			MLV_actualise_window();
		}
		else{
			MLV_draw_filled_circle( x/2, y/2, (x/4)+i, MLV_COLOR_GHOST_WHITE);
			MLV_wait_milliseconds(100);
			MLV_actualise_window();
		}
	}
	MLV_wait_seconds(15);
}


int main(void){
	int x;
	int y;
	int croissance;
	int i;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	printf("Entrez la distance d'animation : ");
	scanf("%d",&croissance);

	cercleanim(x,y,croissance);


	
	return 0;
}