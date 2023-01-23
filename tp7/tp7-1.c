/*Programmation C, TP 7 exercice 1*/
/*LY Steven*/
#include <stdio.h>
#include <MLV/MLV_all.h>

typedef struct{
	int x;
	int y;	
}Point;

void saisiePoint(Point *p){
	MLV_wait_mouse(&(*p).x,&(*p).y);
	MLV_draw_filled_circle((*p).x,(*p).y,5,MLV_COLOR_RED);
	MLV_actualise_window();
	MLV_wait_seconds(10);
}


int main(int argc, char const *argv[]){
	Point p;
	int cox,coy;
	printf("Saisisez la taille de la fenetre\n");
	scanf("%d",&cox);
	scanf("%d",&coy);
	MLV_create_window("fenetre","reation",cox,coy);
	saisiePoint(&p);
	printf("les coordonées sont(%d,%d)\n",(p).x,(p).y);
	return 0;
}
