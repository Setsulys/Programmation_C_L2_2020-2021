#include <stdio.h>
#include <MLV/MLV_all.h>

void rectangle(int x,int y){
	MLV_create_window("fenetre","reation",x,y);
	MLV_draw_filled_rectangle(x/4,y/4,x/2,y/2,MLV_COLOR_STEELBLUE1);
	MLV_actualise_window();
	MLV_wait_seconds(15);

}



int main(void){
	int x;
	int y;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);

	rectangle(x,y);
	return 0;
}


