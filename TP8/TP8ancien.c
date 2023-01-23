#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <MLV/MLV_all.h>


#define TAILLE_X 512
#define TAILLE_Y 512
#define NB_MAX_POINT 256

typedef struct{
int x ;
int y ;
} Point ;

typedef struct{
Point point ;
int distcarre ;
} PointDistance ;

typedef struct{
PointDistance tab[NB_MAX_POINT ] ;
int nb_point ;
} TabPoint ;

/*Fabriquer des tableaux de points aléatoires*/

void genererTabPoint(TabPoint*t,int nb_point){
	int i;
	(*t).nb_point=nb_point;
	srand(time(NULL));

 	for (i=0;i<(*t).nb_point;i++){
 		(*t).tab[i].point.x=rand()%TAILLE_X+1;
 		(*t).tab[i].point.y=rand()%TAILLE_Y+1;
	}
}


/*Afficheir un tableau de point en faisant un dégradé*/
MLV_Color fabriqueCouleur(int i){
	return MLV_rgba(255-i,i,0,255);
}



void dessineTabPoint(TabPoint*t){
	int i ;

	for (i=0;i<NB_MAX_POINT;i++){
		MLV_draw_filled_circle((*t).tab[i].point.x,(*t).tab[i].point.y,5,fabriqueCouleur(i));
		MLV_actualise_window();

	}
}


/*Calcluer les distances*/
void calculeDistance(TabPoint *t,Point origine){
	int i, pointX, pointY;
	
	for(i=0; i <(*t).nb_point; i++){
		pointX=(*t).tab[i].point.x;
		pointY=(*t).tab[i].point.y;
		(*t).tab[i].distcarre= (pointX-origine.x)*(pointX-origine.x)+(pointY-origine.y)*(pointY-origine.y);
	}
}


/*Comparer des points*/
int comparePoint(const void*a, const void*b){
	PointDistance p=*((PointDistance*) a);
	PointDistance q=*((PointDistance*) b);
	return p.distcarre-q.distcarre;
}

/*Trier les points selon leurs distance*/

/*void qsort()*/

/*Un programme complet de coloration de point selon les distance*/






/*MAIN*/
int main(int argc, char*argv[]){
	TabPoint t;
	int nb_point=256;
	Point origine;


	MLV_create_window("fenetre","Point_aleatoires",TAILLE_X,TAILLE_Y);
	genererTabPoint(&t,nb_point);
	dessineTabPoint(&t);
	calculeDistance(&t,origine);
	MLV_wait_seconds(60);
}