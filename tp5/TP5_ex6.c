#include <stdio.h>
#include <MLV/MLV_all.h>



int rectangle(void){
	int x;
	int y;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	MLV_create_window("fenetre","reation",x,y);
	MLV_draw_filled_rectangle(x/4,y/4,x/2,y/2,MLV_COLOR_STEELBLUE1);
	MLV_actualise_window();
	MLV_wait_seconds(15);
	return 0;
}

int elipse(void){
	int x;
	int y;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	MLV_create_window("fenetre","reation",x,y);
	MLV_draw_ellipse( x/2, y/2, x/2, y/2, MLV_COLOR_GHOST_WHITE);
	MLV_actualise_window();
	MLV_wait_seconds(15);
	return 0;
}

int cercle(void){
	int x;
	int y;
	int epaisseur;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	printf("Entrez l'epaisseur du cercle : ");
	scanf("%d",&epaisseur);
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
	return 0;
}

int animation(void){
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
	return 0;
}


int polygone(void){
	int x;
	int y;
	int n;
	int i;
	int cox;
	int coy;
	int a[n];
	int b[n];
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	printf("Entrez le nombre d'occurence :" );
	scanf("%d",&n);
	MLV_create_window("fenetre","reation",x,y);
	for (i=0;i<n;i++){
		MLV_wait_mouse(&cox,&coy);
		a[i]=cox;
		b[i]=coy;
	}
	MLV_draw_polygon(a,b,n,MLV_COLOR_STEELBLUE1);
	MLV_actualise_window();
	MLV_wait_seconds(15);
	return 0;
}

int main(void){
	int n;
	printf("[R]:rectangle [E]:elipse [C]:cercle [A]:animation [P]:polygone \n Entrez la fonction souhaité :")
	scanf("%c",&n)
	switch(n){
		case R : rectangle()
		case E : elipse()
		case C : cercle()
		case A : animation()
		case P : polygone()
		default: do {
			printf("Erreur, valeur non proposé dans le menu");
}
