#include <stdio.h>

int menu()
{
	char couleur;
	printf("\nchoisiez des couleurs entre :\n");
	printf("Noir[N], Blanc[B], Rouge[R], Vert[V], Jaune[J], Quitter[Q]\n");
	printf("Choix\t:\t");
	scanf(" %c",&couleur);
	switch(couleur){
		case 'N' : printf("\nNoir\n");return 1;
		case 'B' : printf("\nBlanc\n");return 1;
		case 'R' : printf("\nRouge\n");return 1;
		case 'V' : printf("\nVert\n");return 1;
		case 'J' : printf("\nJaune\n");return 1;
		case 'Q' : printf("\nSortie du programme\n");return 0;
		default : printf("\nincorrect\n");return 1;
	}
	return 1;
}

int main(){
	while(menu()!=0);
	return 0;
}