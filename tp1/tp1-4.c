#include <stdio.h>


int equdroite(){
	float a,b,c,d,x,y;
	printf("Entrez les coordnonées du point P : ");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("Entrez les coordonnées du point Q : ");
	scanf("%f",&c);
	scanf("%f",&d);
	x=(c-a)/(d-b); /* formule d'equation pour trouver le coeff directeur xb-xa/yb-ya*/
	y=(b-x)*a; /* c'est le calcul de l'ordonnée a l'origine*/
	printf("L'équation de la droite est y= %5.2fx+%5.2f\n",x,y);
	return 1;
}


int intersect(){
	float a1,b1,a2,b2,x,y;
	printf("Donnez les valeurs de la premiere droite séparé d'une virgule\n");
	scanf("%f",&a1);
	scanf("%f",&b1);
	printf("Donnez les valeurs de la deuxieme droite séparé d'une virgule \n");
	scanf("%f",&a2);
	scanf("%f",&b2);
	x=(b1-b2)/(a1-a2);
	y=a1*x+b1;
	printf("Le point d'intersection des deux droites est : (%5.2f,%5.2f)",x,y);
	return 1;
}

int main(){
	int c;
	printf(" 1 - equation de la droite\n 2 - intersection de deux droites \n" );
	printf("Choix : ");
	do{
		scanf("%d",&c);
	}while(c!=1 && c!=2);
	if (c==1)
		equdroite();
	else
		intersect();
	return 0;
}