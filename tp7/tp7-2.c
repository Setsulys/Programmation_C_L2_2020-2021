/*Programmation C, TP 7 exercice 1*/
/*LY Steven*/
#include <stdio.h>
#include <MLV/MLV_all.h>


typedef struct{
	float a; /*coefficient directeur*/
	float b; /*ordonnée a l'origine*/
}Droite;

typedef struct{
	int x;
	int y;	
}Point;

void saisiePoint(Point *p){
	
	MLV_wait_mouse(&(*p).x,&(*p).y);
	MLV_draw_filled_circle((*p).x,(*p).y,5,MLV_COLOR_RED);
	MLV_actualise_window();

	
}

int construireDroite(Point a,Point b,Droite d){
	saisiePoint(&a);
	saisiePoint(&b);
	MLV_draw_line((a).x,(a).y,(b).x,(b).y,MLV_COLOR_RED);
	if((a).x==(b).x)
		return 0;
	else{
		(d).a=(float)((a).y-(b).y)/((a).x-(b).x);
		(d).b=(a).y-(d).a*(a).x;
		printf("%fx+%f\n",(d).a,(d).b);
		return 1;
	}
}

void dessineDroite(Droite d,Point P){
	MLV_draw_line(0,0,(P).x,(P).y,MLV_COLOR_RED);
	MLV_actualise_window();
}


int main(int argc, char const *argv[]){
	int cox;
	Point a,b;
	Droite d;
	printf("Entrez les valeurs de taille de la fenetre : \n");
	scanf("%d",&cox);
	MLV_create_window("fenetre","reation",cox,cox);
	construireDroite(a,b,d);
	dessineDroite(d,a);
	MLV_wait_seconds(10);
	
	return 0;
}
