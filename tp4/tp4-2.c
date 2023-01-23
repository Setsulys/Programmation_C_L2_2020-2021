/*LY Steven TP4*/
/*Exercice 2 : Recherche d'un entier dans un tableau*/

#include <stdio.h>
#define TAILLE 10


int position (int t[],int taille, int x){
	int pos;

	for(pos=0;pos<taille;pos++){
		if (x==t[pos])
			return pos;
	}
	return -1;
}

int main(int argc, char const *argv[]){
	int tab[TAILLE]={0,1,2,3,8,9,10,11,12},x;
	printf("Saissisez un Entier : ");
	scanf(" %d",&x);
	if(-1!=position(tab,TAILLE,x)){
		printf("Sachant que le premier indice d'un tableau est 0,\n");
		printf("La premiere occurence de cette valeur est : %d\n",position(tab,TAILLE,x));
	}
	else
		printf("%d\nla valeur %d n'est pas dans le tableau\n",position(tab,TAILLE,x),x);
	return 0;
}